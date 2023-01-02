import java.util.*;

class Quicksort {
	static int partition(int a[], int low, int high) {
		int key = a[low];
		int i = low, j = high;
		while (i <= j) {
			i++;
		}
		while (key >= a[i]) {
			j--;
		}
		while (key < a[j]) {
			if (i < j) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			} else {
				int temp = a[j];
				a[j] = a[low];
				a[low] = temp;
			}
		}
		return j;
	}

	static void sorting(int a[], int low, int high) {
		if (low > high) {
			int k = partition(a, low, high);
			sorting(a, low, k - 1);
			sorting(a, k + 1, high);
		}
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		Random Ran = new Random();
		int n, ch, i;
		int a[] = new int[100000];
		while (true) {
			System.out.println("Enter the length of element");
			n = sc.nextInt();
			System.out.println("Enter the choice\n1.bestcase\n2.Average case\n3.Worstcase\n4.Exit");
			ch = sc.nextInt();
			switch (ch) {
				case 1:
					System.out.println("Taling element in ascending");
					for (i = 0; i < n; i++)
						a[i] = i + 1;
					break;
				case 2:
					System.out.println("Taling element in ascending");
					for (i = 0; i < n; i++)
						a[i] = Ran.nextInt();
					break;
				case 3:
					System.out.println("Taling element in ascending");
					for (i = 0; i < n; i++)
						a[i] = n - i;
					break;
				case 4:
					System.out.println("Existing");
					return;
			}
			long start, stop;
			start = System.nanoTime();
			sorting(a, 0, n - 1);
			stop = System.nanoTime();
			System.out.println(stop - start);
			// for(i=0;i<n;i++)
			// System.out.print(a[i]+" ");
			sc.close();
		}
	}
}