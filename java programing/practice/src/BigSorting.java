import java.util.*;

public class BigSorting {
    static void bigsorting(String str[], int n) {
        int i, j;
        String s = "";
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (str[j].length() > str[j + 1].length()) {
                    s = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = s;
                } else if (str[j].length() == str[j + 1].length()) {
                    long a = Long.parseLong(str[j]);
                    long b = Long.parseLong(str[j + 1]);
                    if (a > b) {
                        s = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = s;
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            System.out.println(str[i]);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String str[] = new String[n];
        for (int i = 0; i < n; i++)
            str[i] = sc.next();
        sc.close();
        bigsorting(str, n);
    }
}
