package part03_db;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class StudentDao {
    public void add(Student student) throws ClassNotFoundException, SQLException {
        Class.forName("org.h2.Driver");
        Connection con = DriverManager.getConnection(
                "jdbc:h2:~/part03", "sa",""
        );
        String sql = "insert into students values(?,?,?)";
        PreparedStatement pstmt = con.prepareStatement(sql);
        pstmt.setString(1, student.getId());
        pstmt.setString(2, student.getName());
        pstmt.setString(3, student.getDepartment());

        pstmt.executeUpdate();

        pstmt.close();
        con.close();
    }
}
