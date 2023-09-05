package part03_db;

import java.sql.SQLException;

public class TransactionTest {
    public static void main(String[] args) throws SQLException, ClassNotFoundException {
        StudentDao dao = new StudentDao();
        Student s1 = new Student("2223", "ㅁㅇ너ㅗ", "test");

        dao.add(s1);
    }
}
