import java.util.*;

public class floyds {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of vertices");
        int n = sc.nextInt();
        int D[][][] = new int[n + 1][n][n];
        System.out.println("Enter the map");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                D[0][i][j] = sc.nextInt();
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    D[i][j][k] = Math.min(D[i - 1][j][k], D[i - 1][j][i - 1] + D[i - 1][i - 1][k]);
                }
            }
        }
        sc.close();
    }
}
