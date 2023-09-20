package part03_db;

import java.sql.SQLException;

public class TransactionTest {
    public static void main(String[] args) throws SQLException, ClassNotFoundException {
        StudentDao dao = new StudentDao();
        Student s1 = new Student("2222", "test", "test");

        dao.add(s1);

        Student student = dao.get("2222");
        System.out.println(student.getName());

        String id = dao.remove("2222");
        System.out.println(id + " is deleted");
    }
}
