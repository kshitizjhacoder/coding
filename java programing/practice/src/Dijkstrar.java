import java.util.*;

public class Dijkstrar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int adj[][] = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                adj[i][j] = sc.nextInt();
        int src = sc.nextInt();
        int dist[] = dijkstrar(adj, src);
        sc.close();
        for (int i = 0; i < dist.length; i++) {
            if (src - 1 == i)
                continue;
            System.out.println("Shortest path from " + src + " to " + dist[i]);
        }
    }

    static int[] dijkstrar(int adj[][], int src) {
        int n = adj.length;
        int dist[] = new int[n];
        boolean visited[] = new boolean[n];
        int mindist = 0, unvis = -1;
        visited[src - 1] = true;
        for (int i = 0; i < n; i++) {
            visited[i] = false;
            dist[i] = adj[src - 1][i];
        }
        for (int i = 0; i < n; i++) {
            mindist = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if (!visited[j] && mindist > adj[i][j]) {
                    mindist = adj[i][j];
                    unvis = j;
                }
            }
            visited[unvis] = true;
            for (int k = 0; k < n; k++) {
                if (!visited[k] && dist[unvis] + adj[unvis][k] < dist[k]) {
                    dist[k] = dist[unvis] + adj[unvis][k];
                }
            }
        }
        return dist;
    }
}
