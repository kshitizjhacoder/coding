import java.util.*;

public class NonDivisibleSubsets {
    static int nds(int arr[], int n, int k) {
        // int count = 0;
        Set<Integer> s1 = new HashSet<>();
        Set<Integer> s2 = new HashSet<>();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                System.out.println((double) (arr[i] + arr[j]) / (double) k);
                if ((arr[i] + arr[j]) % k != 0) {
                    s1.add(arr[i]);
                    s2.add(arr[j]);
                    // count++;
                }
            }
        }
        Set<Integer> union = new HashSet<>(s1);
        union.addAll(s2);
        return union.size();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.println(nds(arr, n, k));
        sc.close();
    }
}
