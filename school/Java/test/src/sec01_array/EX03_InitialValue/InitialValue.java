package sec01_array.EX03_InitialValue;

import java.util.Arrays;

public class InitialValue {

	public static void main(String[] args) {
		// 스택 메모리값 (강제 초기화 되지 않음)
		int value;
//		System.out.println(value);
		int[] value2;
//		System.out.println(value2);

		boolean[] array1 = new boolean[3];	
		for (int i = 0; i < array1.length; i++) {
			System.out.print(array1[i] + " ");
		}
		System.out.println("");
		
		int[] array2= new int[3];	
		for (int i = 0; i < array2.length; i++) {
			System.out.print(array2[i] + " ");
		}
		System.out.println("");
		
		double[] array3 = new double[3];	
		for (int i = 0; i < array3.length; i++) {
			System.out.print(array3[i] + " ");
		}
		System.out.println("");
		
		String[] array4 = new String[3];	
		for (int i = 0; i < array4.length; i++) {
			System.out.print(array4[i] + " ");
		}
		System.out.println("");
		
		// boolean, int, double은 기본 자료형이고 (값)
		// String은 참조 자료형이다. (주소)
		// 만약 주소를 초기화 시키지 않았다면 null이 담긴다.
		
		// 배열을 한 번에 출력하는 방법
		System.out.println(Arrays.toString(array1));
		System.out.println(Arrays.toString(array2));
		System.out.println(Arrays.toString(array3));
		System.out.println(Arrays.toString(array4));
		
		// 배열을 for문으로 출력하는 가장 멋진 방법 (enhanced for, for-each)
		
		for (boolean k : array1) {
			System.out.println(k);
		}
		
		for (int k : array2) {
			System.out.println(k);
		}
		
		for (double k : array3) {
			System.out.println(k);
		}
		
		for (String k : array4) {
			System.out.println(k);
		}
	}
}
