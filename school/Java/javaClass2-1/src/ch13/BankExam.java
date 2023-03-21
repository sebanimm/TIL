package ch13;

public class BankExam {
    public static void main(String[] args) {
        // 1. 기준금리 3.5%
        BankOfKorea bankOfKorea = BankOfKorea.getInstance();
        bankOfKorea.setBaseRate(3.5f);

        // 근로자(choi)는 은행별 계좌 생성
        Employee choi = new Employee("choi", 1);
        WooriBank wooriBank = WooriBank.getInstance();
        choi.setWooriAccount(wooriBank.makeAccount());
        System.out.println("기준금리 : " + bankOfKorea.getBaseRate());
        System.out.println("choi의 우리은행 계좌번호 : " + choi.getWooriAccount());
        System.out.println("우리은행의 대출금리 : " + wooriBank.getRate());
        KakaoBank kakaoBank = KakaoBank.getInstance();
        choi.setKakaoAccount(kakaoBank.makeAccount());
        System.out.println("choi의 카카오뱅크 계좌번호 : " + choi.getKakaoAccount());
        System.out.println("카카오뱅크의 대출금리 : " + kakaoBank.getRate());

        // 3. 저금
        // 1. 우리은행 5000원
        // 2. 카카오뱅크 5000원
        // 3. 우리은행 10000원
        choi.saving(wooriBank, 5000);
        choi.saving(kakaoBank, 5000);
        choi.saving(wooriBank, 10000);
        choi.showMoney(wooriBank);
        choi.showMoney(kakaoBank);

        // 4. 대출
        choi.borrowMoney(wooriBank, 20000);
        wooriBank.borrowMoney(choi,10000);
        choi.showMoney(wooriBank);
        choi.borrowMoney(kakaoBank, 20000);
        kakaoBank.borrowMoney(choi,10000);
        choi.showMoney(kakaoBank);
    }
}
