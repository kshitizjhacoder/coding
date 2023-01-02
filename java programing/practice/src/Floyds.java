import java.util.*;

public class Floyds {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int D[][][] = new int[n + 1][n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                D[0][i][j] = sc.nextInt();
        }
        sc.close();
        for (int k = 1; k <= n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    D[k][i][j] = Math.min(D[k - 1][i][j], D[k - 1][i][k - 1] + D[k - 1][k - 1][j]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                System.out.print(D[n][i][j] + " ");
            System.out.println();
        }
    }
}
