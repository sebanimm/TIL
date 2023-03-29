package ch15;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;

public class ByteStream2 {
    public static void main(String[] args) {
        BufferedInputStream bi = new BufferedInputStream(System.in);
        BufferedOutputStream bo = new BufferedOutputStream(System.out);
        int a;
        try {
            while ((a = bi.read()) != -1) {
                bo.write(a);
            }
            bo.flush();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
