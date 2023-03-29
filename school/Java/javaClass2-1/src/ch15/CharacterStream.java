package ch15;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CharacterStream {
    public static void main(String[] args) {
        // 자바에서 키보드로 데이터를 입력받을 때
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            String a = br.readLine();
            System.out.println(a);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
