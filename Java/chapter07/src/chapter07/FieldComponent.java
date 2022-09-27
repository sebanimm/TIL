package chapter07;

class AQ {
	int m = 3;
	int n = 4;
	void work1() {
		int k = 5;
		System.out.println(k);
		work2(3);
	}
	void work2(int i) {
		int j = 4;
		System.out.println(i + j);
	}
}


public class FieldComponent {
	public static void main(String[] args) {
		AQ a = new AQ();
		System.out.println(a.m);
		System.out.println(a.n);
		a.work1();
	}
}
