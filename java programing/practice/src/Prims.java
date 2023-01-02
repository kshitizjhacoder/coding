import java.util.*;

public class Prims {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int adj[][] = new int[n][n];
        boolean visited[] = new boolean[n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                adj[i][j] = sc.nextInt();
        int src = sc.nextInt();
        visited[src - 1] = true;
        sc.close();
        int cost = 0, target = 0, source = 0;
        for (int i = 1; i < n; i++) {
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if (visited[j]) {
                    for (int k = 0; k < n; k++) {
                        if (!visited[k] && min > adj[j][k]) {
                            min = adj[j][k];
                            target = k;
                            source = j;
                        }
                    }
                }
            }
            visited[target] = true;
            System.out.print("(" + (source + 1) + "," + (target + 1) + ")");
            cost += min;
        }
        System.out.println("Minimum cost of " + cost);
    }
}
