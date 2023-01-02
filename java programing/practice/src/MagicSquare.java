import java.io.*;
// import java.math.*;
// import java.security.*;
// import java.text.*;
import java.util.*;
// import java.util.concurrent.*;
// import java.util.regex.*;

class Result {

    /*
     * Complete the 'formingMagicSquare' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY s as parameter.
     */
    public static int MaxSum(int a, int b, int c, int d, int e, int f, int d1,
            int d2) {
        int mx = (a > b) ? a : b;
        mx = (mx > c) ? mx : c;
        mx = (mx > d) ? mx : d;
        mx = (mx > e) ? mx : e;
        mx = (mx > f) ? mx : f;
        mx = (mx > d1) ? mx : d1;
        mx = (mx > d2) ? mx : d2;
        return mx;
    }

    public static int formingMagicSquare(List<List<Integer>> s) {
        int d1 = 0, d2 = 0, i, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, diff = 0;
        // int a = MaxSum(s.get(0), 0);
        // int b = MaxSum(s.get(1), 0);
        // int c = MaxSum(s.get(2), 0);

        for (i = 0; i < 3; i++) {
            a += s.get(0).get(i);
            b += s.get(1).get(i);
            c += s.get(2).get(i);
            d += s.get(i).get(0);
            e += s.get(i).get(1);
            f += s.get(i).get(2);
            d1 += s.get(i).get(i);
            d2 += s.get(2 - i).get(i);
        }
        int mx = MaxSum(a, b, c, d, e, f, d1, d2);
        System.out.println(a + " " + b + " " + c + " " + d + " " + e + " " + f + " "
                + d1 + " " + d2 + "\n" + mx);
        if (a == d && a == d1 && a != mx && s.get(0).get(0) + (mx - a) <= 9) {// 0,0
            diff += mx - a;
            a = d = d1 = mx;
        }
        if (a == e && a != mx && s.get(0).get(1) + (mx - a) <= 9) {// 0,1
            diff += mx - a;
            a = e = mx;
        }
        if (a == f && a == d2 && a != mx && s.get(0).get(2) + (mx - a) <= 9) {// 0,2
            diff += mx - a;
            a = f = d2 = mx;
        }
        if (b == d && b != mx && s.get(1).get(0) + (mx - b) <= 9) {// 1,0
            diff += mx - b;
            b = d = mx;
        }
        if (b == e && b == d1 && b == d2 && b != mx && s.get(1).get(1) + (mx - b) <= 9) {// 1,1
            diff += mx - b;
            b = d1 = e = d2 = mx;
        }
        if (b == f && b != mx && s.get(1).get(2) + (mx - b) <= 9) {// 1,2
            diff += mx - b;
            b = f = mx;
        }
        if (c == d && c == d2 && c != mx && s.get(2).get(0) + (mx - c) <= 9) {// 2,0
            diff += mx - c;
            c = d = d2 = mx;
        }
        if (c == e && c != mx && c != mx && s.get(2).get(1) + (mx - c) <= 9) {// 2,1
            diff += mx - c;
            c = e = mx;
        }
        if (c == f && c == d1 && c != mx && c != mx && s.get(2).get(2) + (mx - c) <= 9) {
            diff += mx - c;
            c = f = d1 = mx;
        }
        return diff;
    }

}

public class MagicSquare {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        List<List<Integer>> s = new ArrayList<>();

        for (int i = 0; i < 3; i++) {
            // String[] sRowTempItems = bufferedReader.readLine().replaceAll("\\s+$",
            // "").split(" ");

            List<Integer> sRowItems = new ArrayList<>();

            for (int j = 0; j < 3; j++) {
                int sItem = sc.nextInt();
                sRowItems.add(sItem);
            }

            s.add(sRowItems);
        }

        int result = Result.formingMagicSquare(s);
        System.out.println(result);
        sc.close();
        // bufferedWriter.close();
    }
}