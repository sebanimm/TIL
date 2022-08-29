package ch01;

// 나만의 클래스(붕어빵 틀) 정의
class A {
	int m = 3;
	void print() {
		System.out.println("객체 생성 및 활용");
	}
}


public class CreateObject {
	
	public static void main(String args[]) {
		// 내가 만든 클래스로 객체 (붕어빵) 생성
		A a = new A();
		
		// 만들었으면 활용도 할줄 알아야겠지?
		a.m = 5;
		System.out.println(a.m);
		
		a.print();
	}
	
}
