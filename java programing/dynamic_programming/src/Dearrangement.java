import java.util.Scanner;

public class Dearrangement {
    static boolean derange(int a[], int n) {
        for (int i = 0; i < n; i++) {
            if (a[i] == i + 1)
                return false;
        }
        return true;
    }

    static void printarr(int a[], int n) {
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
    }

    static void recurrHeap(int a[], int size, int n) {
        if (size == 1) {
            if (derange(a, n)) {
                printarr(a, n);
            }
        }
        for (int i = 0; i < size; i++) {
            recurrHeap(a, size - 1, n);
            if (size % 2 == 1) {
                int temp = a[0];
                a[0] = a[size - 1];
                a[size - 1] = temp;
            } else {
                int temp = a[i];
                a[i] = a[size - 1];
                a[size - 1] = temp;
            }
        }

    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        recurrHeap(arr, n, n);
        sc.close();
    }
    /*
     * program in the most efficient way
     * taking pair and swapping and for the odd part swap again
     * static void swappair(int arr[],int n)
     * {
     * if(n%2==0)
     * for(int i=0;i<n-1;i+=2)
     * int temp = a[i];
     * a[i] = a[i+1];
     * a[i+1]=temp;
     * else
     * for(int i=0;i<n-2;i+=2)
     * int temp = a[i];
     * a[i] = a[i+1];
     * a[i+1]=temp;
     * int temp = a[size-1];
     * a[i] = a[size-2];
     * a[size-2]=temp;
     * }
     */
}
