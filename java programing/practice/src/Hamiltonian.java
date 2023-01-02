import java.util.Scanner;

public class Hamiltonian {

    static int graph[][];
    static int sol[];
    static int cnt = 0, n;

    static void printarr() {
        System.out.println("printing arr");
        cnt += 1;
        for (int i = 1; i <= n; i++)
            System.out.print(sol[i] + " ");
        System.out.println(sol[1]);
    }

    static void nextValue(int k) {
        while (true) {
            // System.out.println("inside nextval");
            sol[k] = (sol[k] + 1) % (n + 1);

            if (sol[k] == 0)
                return;

            if (graph[sol[k - 1]][sol[k]] != 0) {
                int j;
                for (j = 1; j < k; j++)
                    if (sol[j] == sol[k])
                        break;
                if (j == k) {
                    if (k < n || (k == n && graph[sol[n]][sol[1]] != 0))
                        return;
                }
            }
        }
    }

    static void hamiltonian(int k) {
        while (true) {
            // System.out.println("inside ham");
            nextValue(k);
            if (sol[k] == 0)
                return;

            if (k == n)
                printarr();

            else
                hamiltonian(k + 1);
        }
    }

    public static void main(String[] args) {
        // ham obj = new ham();
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of vertices");
        n = sc.nextInt();
        graph = new int[n + 1][n + 1];
        System.out.println("enter the adjacency matrix");
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                graph[i][j] = sc.nextInt();
        // inarr(graph, n);
        sc.close();
        sol = new int[n + 1];
        System.out.println("hamiltonian cycles are:");
        sol[1] = 1;
        hamiltonian(2);
        if (cnt == 0)
            System.out.println("No ham cycles");

    }

}