package ch15.simpledotcom;

import java.util.ArrayList;

public class SimpleDotComGame {
    public static void main(String[] args) {
        SimpleDotCom simpleDotCom = new SimpleDotCom();
        ArrayList<Integer> location = new ArrayList<Integer>();
        location.add(2);
        location.add(3);
        location.add(4);
        simpleDotCom.setLocation(location);

        String result1 = simpleDotCom.checkYourself("2");
        String result2 = simpleDotCom.checkYourself("3");
        String result3 = simpleDotCom.checkYourself("5");
        String result4 = simpleDotCom.checkYourself("4");
        System.out.println(result1);
        System.out.println(result2);
        System.out.println(result3);
        System.out.println(result4);
    }
}
