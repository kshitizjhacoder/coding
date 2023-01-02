import java.util.Scanner;

class Uglynumber {
	static boolean isPrime(int n) {
		int c = 0;
		for (int i = 1; i <= n; i++)
			if (n % i == 0)
				c++;
		if (c == 2)
			return true;
		else
			return false;
	}

	static boolean isUgly(int n) {
		int i;
		if (isPrime(n))
			return false;
		for (i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				if (i > 5) {
					if (isPrime(i)) {
						return false;
					}
				}
			}
		}
		return true;
	}

	static int nth(int n, int c) {
		int i, num = 0;
		for (i = 6; c != n; i++) {
			if (isUgly(i)) {
				c++;
				num = i;
			}
		}
		return num;
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number to check");
		int n = sc.nextInt();
		int c = 5;
		System.out.println(nth(n, c));
		sc.close();
	}
}