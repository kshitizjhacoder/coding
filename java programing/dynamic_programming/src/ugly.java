import java.util.Scanner;

class ugly {
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

	static boolean factors(int n) {
		int i;
		for (i = 1; i <= n; i++) {
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

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number to check");
		int n = sc.nextInt();
		if (factors(n))
			System.out.println("Ugly number");
		else
			System.out.println("Not Ugly number");
		sc.close();
	}
}