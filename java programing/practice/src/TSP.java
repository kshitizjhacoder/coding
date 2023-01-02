import java.util.Scanner;

public class TSP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int adj[][] = new int[n + 1][n + 1];
        int s[] = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++)
                adj[i][j] = sc.nextInt();
            s[i] = 1;
        }
        int cost = g(1, n - 1, adj, s, n);
        System.out.println("The minimum cost " + cost);
        sc.close();
    }

    static int g(int i, int s, int adj[][], int set[], int n) {
        int newset[] = new int[n + 1];
        int selected[] = new int[n + 1];
        for (int j = 1; j <= n; j++)
            newset[j] = set[j];
        newset[i] = 0;
        if (s == 0)
            return adj[n][1];
        // int min = 999;
        for (int j = 2, k = 0; k < s; j++) {
            if (newset[j] != 0) {
                selected[k] = adj[i][j] + g(j, s - 1, adj, newset, n);
                k++;
            }
        }
        int min = 999;
        for (int j = 0; j < s; j++) {
            if (selected[j] < min) {
                min = selected[j];
            }
        }
        return min;
    }
}
