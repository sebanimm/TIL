package ch13;

public class Employee {
    private String name;
    private int grade;
    private int wooriAccount;
    private int kakaoAccount;

    public Employee(String name, int grade) {
        this.name = name;
        this.grade = grade;
    }

    public void saving(Object obj, int money) {
        if (obj instanceof WooriBank) {
            ((WooriBank)obj).saving(this.wooriAccount, money);
        }else if (obj instanceof KakaoBank) {
            ((KakaoBank)obj).saving(this.kakaoAccount, money);
        }
    }

    public void showMoney(Object obj) {
        if (obj instanceof WooriBank) {
            int now = ((WooriBank) obj).getAccount(this.wooriAccount);
            System.out.println("우리은행의 현재 금액은 " + now + " 원 입니다.");
        } else if (obj instanceof KakaoBank) {
            int now = ((KakaoBank) obj).getAccount(this.kakaoAccount);
            System.out.println("카뱅의 현재 금액은 " + now + " 원 입니다.");
        }
    }

    public int getWooriAccount() {
        return wooriAccount;
    }

    public void setWooriAccount(int wooriAccount) {
        this.wooriAccount = wooriAccount;
    }

    public int getKakaoAccount() {
        return kakaoAccount;
    }

    public void setKakaoAccount(int kakaoAccount) {
        this.kakaoAccount = kakaoAccount;
    }

    public void borrowMoney(Object obj, int money) {
        if (obj instanceof WooriBank) {
            int borrow = ((WooriBank) obj).borrowMoney(this, money);
            ((WooriBank) obj).saving(this.wooriAccount, borrow);
            grade++;
        }else if (obj instanceof KakaoBank) {
            int borrow = ((KakaoBank) obj).borrowMoney(this, money);
            ((KakaoBank) obj).saving(this.kakaoAccount, borrow);
            grade++;
        }
    }

    public int getGrade() {
        return grade;
    }
}
