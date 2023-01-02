import java.util.*;

public class DKnapsack {
    int weight[], profit[];
    int cap, n;

    DKnapsack() {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        weight = new int[n];
        profit = new int[n];
        for (int i = 0; i < n; i++) {
            profit[i] = sc.nextInt();
            weight[i] = sc.nextInt();
        }
        cap = sc.nextInt();
        sc.close();
    }

    void fill() {
        int k[][] = new int[n + 1][cap + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= cap; j++) {
                if (i == 0 || j == 0)
                    k[i][j] = 0;
                else if (j < weight[i - 1])
                    k[i][j] = k[i - 1][j];
                else
                    k[i][j] = Math.max(k[i - 1][j], profit[i - 1] + k[i - 1][j - weight[i - 1]]);
            }
        }
        System.out.println("Minimum cost is" + k[n][cap]);
        System.out.println("Items Considered");
        int i = n, j = cap;
        while (i > 0 && j > 0) {
            if (k[i][j] != k[i - 1][j]) {
                System.out.print(i + " ");
                j = j - weight[i - 1];
            }
            i = i - 1;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        DKnapsack kn = new DKnapsack();
        kn.fill();
    }
}
