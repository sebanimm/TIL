package ch16.dotcom;

import java.util.ArrayList;

public class DotComBust {
    private ArrayList<DotCom> dotComs = new ArrayList<DotCom>();
    private GameHelper gameHelper = new GameHelper();
    private int numOfGuesses = 0;
    public static void main(String[] args) {
        DotComBust game = new DotComBust();
        game.setUpGame();
        game.startPlaying();
    }

    private void startPlaying() {
        while (!dotComs.isEmpty()) {
            String userGuess = gameHelper.getUserInput("Enter a guess");
            checkUserGuess(userGuess);
        }
        finishGame();
    }

    private void finishGame() {
        System.out.println(numOfGuesses + " guesses");
        if (numOfGuesses <= 18) {
            System.out.println("good job");
        } else {
            System.out.println("개못하네");
        }
    }

    private void checkUserGuess(String userGuess) {
        numOfGuesses++;
        String result = "miss";
        for (DotCom dotCom : dotComs) {
            result = dotCom.checkYourself(userGuess);
            if (result.equals("hit")) {
                break;
            }
            if (result.equals("kill")) {
                dotComs.remove(dotCom);
                break;
            }
        }
        System.out.println(result);
    }

    private void setUpGame() {
        // dotcom 생성
        dotComs.add(new DotCom("google.com"));
        dotComs.add(new DotCom("kakao.com"));
        dotComs.add(new DotCom("naver.com"));
        // dotcom 추가
        for (DotCom dotCom : dotComs) {
            ArrayList<String> newLocation = gameHelper.placeDotCom();
            dotCom.setLocation(newLocation);
        }

        gameHelper.printAll();
    }

}
