package ch13;

public interface Bank {
    int makeAccount();

    void saving(int account, int money);

    int borrowMoney(Employee employee, int money);

    int getAccount(int account);
}
