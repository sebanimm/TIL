package ch15;

import java.io.IOException;
import java.io.InputStream;

public class ByteStream1 {
    public static void main(String[] args) {
        InputStream is = System.in;
        byte[] b = new byte[1024];
        int len = 0;
        try {
            len = is.read();
            System.out.write(b, 0, len);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
