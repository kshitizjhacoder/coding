import java.util.*;

public class prims {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int weight[][] = new int[n][n];
        boolean visited[] = new boolean[n];
        int min, cost = 0, target = 0, source = 0;
        for (int i = 0; i < n; i++) {
            visited[i] = false;
            for (int j = 0; j < n; j++) {
                weight[i][j] = sc.nextInt();
            }
        }
        int src = sc.nextInt();
        visited[src - 1] = true;
        for (int i = 0; i < n; i++) {
            min = Integer.MAX_VALUE;
            for (int j = 0; j < n; j++) {
                if (visited[i]) {

                    for (int k = 0; k < n; k++) {
                        if (visited[k] && min > weight[j][k]) {
                            min = weight[j][k];
                            source = j;
                            target = k;
                        }
                    }
                }
            }
            visited[target] = true;
            System.out.print("(" + source + "," + target + ")");
            cost = cost + min;
        }
        System.out.println("the minimum cost " + cost);
    }
}
