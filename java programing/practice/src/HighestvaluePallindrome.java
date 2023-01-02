import java.util.*;

public class HighestvaluePallindrome {
    static int ispallindrome(int arr[], int n) {
        int count = 0;
        for (int i = 0; i < n / 2; i++) {
            if (arr[i] != arr[n - i - 1])
                count++;
        }
        if (count == 0)
            return -1;
        else
            return count;
    }

    static String largepallindromeOK(int arr[], int n, int k) {
        String s = "";
        int m = k;
        // String e = "";
        if (n % 2 == 0 && k % 2 != 0)
            return null;
        else if (n % 2 == 0 && k % 2 == 0 && k < n) {
            for (int i = 0; i < n / 2 && k > 0; i++) {
                if (arr[i] != 9 && arr[n - i - 1] != 9) {
                    arr[i] = arr[n - i - 1] = 9;
                    k = k - 2;
                }
            }
            if (m == k)
                return null;
        } else if (n % 2 != 0 && k % 2 == 0 && k < n) {
            for (int i = 0; i < n / 2 && k > 0; i++) {
                if (arr[i] != 9 && arr[n - i - 1] != 9) {
                    arr[i] = arr[n - i - 1] = 9;
                    k = k - 2;
                }
            }
            if (m == k)
                return null;
        } else if (n % 2 != 0 && k % 2 != 0 && k < n) {
            if (arr[n / 2] != 9) {
                arr[n / 2] = 9;
                k--;
            } else
                return null;
            for (int i = 0; i < n / 2 && k > 1; i++) {
                if (arr[i] != 9 && arr[n - i - 1] != 9) {
                    arr[i] = arr[n - i - 1] = 9;
                    k = k - 2;
                }
            }
            if (m == k)
                return null;

        }

        for (int i = 0; i < arr.length; i++)
            s = s + arr[i];
        return s;
    }

    static String largepallindromeNO(int arr[], int n, int k, int count) {
        String s = "";
        if (k % 2 != 0 && n % 2 == 0) {
            if (k == count) {
                for (int i = 0; i < n / 2; i++) {
                    if (arr[i] != arr[n - i - 1]) {
                        arr[i] = arr[n - i - 1] = (arr[i] > arr[n - i - 1]) ? arr[i] : arr[n - i - 1];
                    }
                }
            } else if (k < count)
                return null;
            else {
                for (int i = 0; i < n / 2 && k > 1; i++) {
                    if (arr[i] != arr[n - i - 1] && arr[n - i - 1] != 9 && arr[i] != 9) {
                        arr[i] = arr[n - i - 1] = 9;
                        k = k - 2;
                    } else if (arr[i] != arr[n - i - 1]) {
                        arr[i] = arr[n - i - 1] = (arr[i] > arr[n - i - 1]) ? arr[i] : arr[n - i - 1];
                        k--;
                    }
                }

            }
        }
        for (int i = 0; i < arr.length; i++)
            s = s + arr[i];
        return s;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String str = sc.next();
        int arr[] = new int[str.length()];
        for (int i = 0; i < str.length(); i++)
            arr[i] = str.charAt(i) - '0';
        sc.close();
        if (ispallindrome(arr, n) == -1) {
            System.out.println("Yes");
            System.out.println(largepallindromeOK(arr, n, k));
        } else {
            int count = ispallindrome(arr, n);
            System.out.println(largepallindromeNO(arr, n, k, count));
            System.out.println("NO");
        }
    }
}
