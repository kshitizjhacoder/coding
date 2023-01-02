import java.util.*;

public class QueensAttack2 {
    static boolean validhorvertobs(int r, int c, int r_q, int c_q) {
        if (r == r_q || c == c_q)
            return true;
        if (Math.abs(r - r_q) == Math.abs(c - c_q))
            return false;
        return false;
    }

    static boolean validdiaobs(int r, int c, int r_q, int c_q) {
        if (r == r_q || c == c_q)
            return false;
        if (Math.abs(r - r_q) == Math.abs(c - c_q))
            return true;
        return false;
    }

    static int queensAttack(int n, int k, int r_q, int c_q, int[][] obs) {
        int count = 0;
        count = 2 * (n - 1);
        count += (Math.abs(n - r_q) < Math.abs(n - c_q)) ? Math.abs(n - r_q) : Math.abs(n - c_q);
        count += (Math.abs(n - r_q) < Math.abs(c_q - 1)) ? Math.abs(n - r_q) : Math.abs(c_q - 1);
        count += (Math.abs(r_q - 1) < Math.abs(c_q - 1)) ? Math.abs(r_q - 1) : Math.abs(c_q - 1);
        count += (Math.abs(r_q - 1) < Math.abs(c_q - n)) ? Math.abs(1 - r_q) : Math.abs(c_q - n);
        // Write your code here// count = Math.abs(n - r_q) + Math.abs(n - c_q) +
        // Math.abs(r_q - 1) +
        // Math.abs(c_q - 1);
        if (k == 0)
            return count;
        for (int i = 0; i < k; i++) {
            if (validhorvertobs(obs[i][0], obs[i][1], r_q, c_q)) {
                if (obs[i][0] > r_q && obs[i][0] < n)
                    count = count - (n - obs[i][0] - 1);
                else if (obs[i][0] < r_q && obs[i][0] > 0)
                    count = count - (obs[i][0]);
                if (obs[i][1] > c_q && obs[i][1] < n)
                    count = count - (n - obs[i][1] - 1);
                else if (obs[i][1] < c_q)
                    count = count - (obs[i][1]);
            }
            if (validdiaobs(obs[i][0], obs[i][1], r_q, c_q)) {
                if (obs[i][0] > r_q && obs[i][1] > c_q)
                    count -= (Math.abs(n - r_q) > Math.abs(n - c_q)) ? Math.abs(n - r_q) : Math.abs(n - c_q);
                else if (obs[i][0] > r_q && obs[i][1] < c_q)
                    count -= (Math.abs(n - r_q) > Math.abs(c_q - 1)) ? Math.abs(n - r_q) : Math.abs(c_q - 1);
                else if (obs[i][0] < r_q && obs[i][1] < c_q)
                    count -= (Math.abs(r_q - 1) < Math.abs(c_q - 1)) ? Math.abs(r_q - 1) : Math.abs(c_q - 1);
                else if (obs[i][0] < r_q && obs[i][1] > c_q)
                    count -= (Math.abs(r_q - 1) < Math.abs(c_q - n)) ? Math.abs(1 - r_q) : Math.abs(c_q - n);
            }
        }
        return count;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int r_q = sc.nextInt();
        int c_q = sc.nextInt();
        int obs[][] = new int[k][2];
        for (int i = 0; i < k; i++) {
            obs[i][0] = sc.nextInt();
            obs[i][1] = sc.nextInt();
        }
        System.out.println(queensAttack(n, k, r_q, c_q, obs));
        sc.close();
    }
}
