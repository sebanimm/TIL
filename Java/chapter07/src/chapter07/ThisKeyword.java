package chapter07;

class AAA {
	int m;
	int n;
	void init(int m, int n) {
		m = m;
		n = n;
	}
}

class B {
	int m;
	int n;
	void init(int m, int n) {
		this.m = m;
		this.n = n;
	}
}

public class ThisKeyword {
	public static void main(String[] args) {
		AAA a = new AAA();
		a.init(2, 3);
		System.out.println(a.m);
		System.out.println(a.n);
		
		B b = new B();
		b.init(2, 3);
		System.out.println(b.m);
		System.out.println(b.n);
	}
}
