package chapter07;

class Aa {
	Aa() {
		System.out.println("첫 번째 생성자");
	}
	Aa(int a) {
		System.out.println("두 번째 생성자");
	}
	Aa(int a, int b) {
		System.out.println("세 번째 생성자");
	}
	
}

public class ConstructorOverloading {
	public static void main(String[] args) {
		Aa a1 = new Aa();
		Aa a2 = new Aa(3);
		Aa a3 = new Aa(3, 5);
	}
}
