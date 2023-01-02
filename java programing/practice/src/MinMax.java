import java.util.Scanner;

class Pair {
    public int max, min;

    public Pair(int max, int min) {
        this.max = max;
        this.min = min;
    }
}

class MinMax {
    // static int max_1, max_2, min_1, min_2/;

    static void maxmin(int a[], int i, int j, Pair elem) {
        if (i == j) {
            if (elem.max < a[j])
                elem.max = a[j];
            else if (elem.min > a[j])
                elem.min = a[j];
            // max = min = a[i];
        } else if (i == j - 1) {
            if (a[i] < a[j]) {
                if (elem.max < a[j])
                    elem.max = a[j];
                if (elem.min > a[i])
                    elem.min = a[i];
            } else {
                if (elem.max < a[i])
                    elem.max = a[i];
                if (elem.min > a[j])
                    elem.min = a[j];
            }

        } else {
            int mid = (i + j) / 2;
            maxmin(a, i, mid, elem);
            maxmin(a, mid, j, elem);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the kength");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Pair elem = new Pair(0, arr[0]);
        maxmin(arr, 0, n - 1, elem);
        System.out.println(elem.min + " " + elem.max);
        sc.close();
    }
}
