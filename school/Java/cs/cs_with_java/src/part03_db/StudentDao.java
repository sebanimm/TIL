package part03_db;

import java.sql.*;

public class StudentDao {
    public void add(Student student) throws ClassNotFoundException, SQLException {
        Class.forName("org.h2.Driver");
        Connection con = DriverManager.getConnection(
                "jdbc:h2:tcp://localhost/~/part03", "sa",""
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

    public Student get(String id) throws ClassNotFoundException, SQLException {
        Class.forName("org.h2.Driver");
        Connection con = DriverManager.getConnection("jdbc:h2:tcp://localhost/~/part03","sa","");
        String sql = "select * from students where id = ?";
        PreparedStatement pstmt = con.prepareStatement(sql);
        pstmt.setString(1, id);

        ResultSet rs = pstmt.executeQuery();
        rs.next();
        String studentId = rs.getString(1);
        String studentName = rs.getString(2);
        String studentDepartment = rs.getString(2);
        Student student = new Student(studentId, studentName, studentDepartment);

        rs.close();
        pstmt.close();
        con.close();

        return student;
    }

    public String remove(String id) throws SQLException, ClassNotFoundException {
        Class.forName("org.h2.Driver");
        Connection con = DriverManager.getConnection(
                "jdbc:h2:tcp://localhost/~/part03", "sa",""
        );

        String sql = "delete from students where id = ?";
        PreparedStatement pstmt = con.prepareStatement(sql);
        pstmt.setString(1, id);

        pstmt.executeUpdate();
        pstmt.close();
        con.close();

        return id;
    }
}
