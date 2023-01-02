import java.util.Scanner;

public class dijkstrar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of vertices");
        int n = sc.nextInt();
        int adj[][] = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                adj[i][j] = sc.nextInt();
        int src = sc.nextInt();
        sc.close();
        int dist[] = dijks(adj, src);
        for (int i = 0; i < n; i++) {
            if (src - 1 == i)
                continue;
            System.out.println("the vertex reached by" + src + "to" + dist[i]);
        }
    }

    static int[] dijks(int adj[][], int src) {
        int n = adj.length;
        int dist[] = new int[n];
        boolean visited[] = new boolean[n];
        int unvis = -1, min_dist;
        for (int i = 0; i < n; i++) {
            visited[i] = false;
            dist[i] = adj[src - 1][i];
        }
        visited[src - 1] = true;
        for (int i = 0; i < n; i++) {
            min_dist = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if (!visited[j] && dist[j] < min_dist) {
                    unvis = j;
                    min_dist = dist[j];
                }
            }
            visited[unvis] = true;
            for (int k = 0; k < n; k++) {
                if (!visited[k] && dist[unvis] + adj[unvis][k] < dist[k])
                    dist[k] = dist[unvis] + adj[unvis][k];
            }
        }
        return dist;
    }
}
