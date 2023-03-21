package ch13;

import java.util.HashMap;

public class WooriBank implements Bank {
    private static WooriBank instance = new WooriBank();
    private static int account;
    private static float rate;
    private static float money;
    private static HashMap<Integer, Integer> store = new HashMap<>();

    private WooriBank(){
        account = 1000;
        rate = BankOfKorea.getInstance().getBaseRate() + 2;
        money = 100000000;
    }

    public static WooriBank getInstance() {
        if (instance == null) {
            instance = new WooriBank();
        }
        return instance;
    }

    public void saving(int account, int money) {
        if (store.get(account) != null){
            money += store.get(account);
        }
        store.put(account,money);
    }

    public int getAccount(int account) {
        return store.get(account);
    }

    public int borrowMoney(Employee employee, int money) {
        if (employee.getGrade() > 3) {
            System.out.println("신용등급 3등급 이상만 대출이 가능합니다.");
            return 0;
        }
        if (this.money < money) {
            System.out.println("자금이 모자랍니다.");
        }

        this.money -= money;
        System.out.println("우리은행에서 " + money + "원을 대출합니다. 금리는 " + rate + "% 입니다." + "연간 이자는 " + money * rate / 100 + "원 입니다.");
        return money;
    }

    public int makeAccount() {
        return ++account;
    }

    public float getRate() {
        return rate;
    }
}
