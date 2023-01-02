import java.util.*;

public class TheGridSearch {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int R = 0, C = 0, r = 0, c = 0;
        next: while (t-- > 0) {
            R = sc.nextInt();
            C = sc.nextInt();
            // sc.next();
            int str[][] = new int[R][C];
            for (int i = 0; i < R; i++) {
                String line = sc.next();
                for (int j = 0; j < C; j++) {
                    str[i][j] = line.charAt(j) - '0';
                }
                // System.out.println(str[i].length());
            }
            r = sc.nextInt();
            c = sc.nextInt();
            // sc.next();
            int pat[][] = new int[r][c];
            for (int i = 0; i < r; i++) {
                String line = sc.next();
                for (int j = 0; j < c; j++) {
                    pat[i][j] = line.charAt(j) - '0';
                }
            }
            // boolean cond = false;
            // if (r < R && c < C) {
            // int k = 0, m1 = 0, m2 = 0, i = 0, j = 0;
            // for (i = 0; i <= R - r; i++) {
            // if (cond) {
            // while (k < r) {
            // // int f = str[i].substring(m1, m2).compareTo(pat[k]);
            // if (str[i].substring(m1, m2).compareTo(pat[k]) == 0) {
            // k++;
            // i++;
            // cond = true;
            // } else {
            // cond = false;
            // break;
            // }
            // }
            // k = 0;
            // if (cond) {
            // System.out.println("YES");
            // break;
            // }
            // } else {
            // for (j = 0; j < C - c + 1; j++) {
            // System.out.println("a");
            // // if (str[i].charAt(j) == pat[k].charAt(0)) {
            // if (str[i].substring(j, j + c - 1).compareTo(pat[k]) == 0) {
            // cond = true;
            // m1 = j;
            // m2 = j + c - 1;
            // k++;
            // break;
            // }

            // }
            // }
            // }
            // }
            // if (cond == false)
            // System.out.println("NO");
            // }
            for (int i = 0; i <= R - r; i++) {
                for (int j = 0; j <= C - c; j++) {
                    boolean works = true;
                    outer: for (int a = 0; a < r; a++) {
                        for (int b = 0; b < c; b++) {
                            if (str[i + a][j + b] != pat[a][b]) {
                                works = false;
                                break outer;
                            }
                        }
                    }
                    if (works) {
                        System.out.println("YES");
                        // continue next;
                    }
                }
            }
            System.out.println("NO");
        }
        sc.close();

    }
}
