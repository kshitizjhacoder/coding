
public class HeapAlgorithm {
    static void printarr(int a[], int n) {
        for (int i = 0; i < n; i++)
            System.out.print(a[i] + " ");
        System.out.println();
    }

    static void recurheap(int a[], int size, int n) {
        if (size == 1)
            printarr(a, n);
        for (int i = 0; i < size; i++) {
            recurheap(a, size - 1, n);
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
        int arr[] = { 1, 2, 3 };
        int n = arr.length;
        int size = arr.length;
        recurheap(arr, size, n);
    }
}
