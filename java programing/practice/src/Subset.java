import java.util.Scanner;

public class Subset {
    static int arr[];
    static int count = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        int total = sc.nextInt();
        sc.close();
        subset(total, n - 1, new boolean[n]);
        if (count == 0)
            System.out.println("No result found");
    }

    static void subset(int total, int ind, boolean soln[]) {
        if (total == 0)
            printArray(soln);
        if (total < 0 || ind < 0)
            return;
        boolean tempsoln[] = soln.clone();
        tempsoln[ind] = false;
        subset(total, ind - 1, tempsoln);
        tempsoln[ind] = true;
        subset(total - arr[ind], ind - 1, tempsoln);
    }

    static void printArray(boolean soln[]) {
        count += 1;
        for (int i = 0; i < soln.length; i++) {
            if (soln[i])
                System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
