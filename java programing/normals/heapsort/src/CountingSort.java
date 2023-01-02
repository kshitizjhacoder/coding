import java.util.Scanner;

public class CountingSort {
    static void countingsort(char arr[], int n) {
        int index[] = new int[256];
        char output[] = new char[n];
        for (int i = 0; i < 256; i++)
            index[i] = 0;
        for (int i = 0; i < n; i++)
            ++index[arr[i]];
        for (int i = 1; i <= 255; i++)
            index[i] += index[i - 1];
        for (int i = n - 1; i >= 0; i--) {
            output[index[arr[i]] - 1] = arr[i];
            --index[arr[i]];
        }
        for (int i = 0; i < n; i++)
            arr[i] = output[i];
        // return arr;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array");
        int n = sc.nextInt();
        char arr[] = new char[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.next().charAt(0);
        sc.close();
        countingsort(arr, n);
    }
}