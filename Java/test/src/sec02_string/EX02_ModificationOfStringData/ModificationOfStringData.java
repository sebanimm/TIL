package sec02_string.EX02_ModificationOfStringData;

public class ModificationOfStringData {
	
	public static void main(String[] args) {
		// 문자열 생성 (문자열 클래스 자료형ㅇ을 이용함)
//		String str1 = new String("안녕");
//		System.out.println(str1);
//		String str2 = str1;
//		
//		str1 = "안녕하세요"; // new String("안녕하세요"); 와 동일
//		System.out.println(str1);
//		System.out.println(str2);
		
//		String str1 = new String("안녕"); // new 하면 무조건 객체 생성
//		String str2 = "안녕"; // 최초 1회는 그냥 객체 생성
//		String str3 = "안녕"; // 2회부터는 있는거 재활용
//		String str4 = new String("안녕"); // new 하면 무조건 객체 생성
//		// 이건 String 클래스만의 고유한 특징이고 다른 클래스들은 무조건 객체를 생성한다.
//		
//		System.out.println(str1 == str2);
//		System.out.println(str3 == str2);
//		System.out.println(str3 == str4);
//		System.out.println(str1 == str4);
//		String str1 = "안녕" + "하세요" + "!";
//		System.out.println(str1);
//		
//		// 문자열과 기본 자료형 혼용
//		System.out.println(1+"안녕");
//		System.out.println(1+"안녕"+2);
//		System.out.println("안녕"+1+2);
//		System.out.println(1+2+"안녕");
		
		// 문자열 검색 charAt
//		String str1 = "Hello Java";
//		String str2 = "안녕하세요! 반갑습니다.";
//		System.out.println(str1.charAt(1));
//		System.out.println(str2.charAt(1));
//		System.out.println();
//		
//		//indexOf(), lastIndex()	;
//		System.out.println(str1.indexOf('a'));
//		System.out.println(str1.lastIndexOf('a'));
//		
//		// valueOf() : 기본 자ㅛ형의 값을 문자열로 변환시켜줌
//		String str3 = String.valueOf(2.3);
//		String str4 = String.valueOf(false);
//		System.out.println(str3);
//		System.out.println(str4);
		
		String str2 = new String("Java");
		String str3 = new String("Java");
		String str4 = new String("Java");
		
		System.out.println(str2 == str3);
		System.out.println(str4 == str3);
		System.out.println(str2 == str4);
		
		System.out.println(str2.equals(str3));
		System.out.println(str3.equals(str4)); // equals : 속 내용 대소문자 구분
		System.out.println(str3.equalsIgnoreCase(str4)); // 대소문자 구분 안함
		
		
	}
}
