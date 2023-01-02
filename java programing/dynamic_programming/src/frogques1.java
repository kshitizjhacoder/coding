import java.util.Scanner;

public class frogques1 {
    static int minicost(int n, int h[]) {
        int min;
        int cost = 0;
        // int dp[] = new int[n];
        for (int i = 0; i < n;) {
            // min=h[i+1]<h[i+2]?i++:i=i+2;
            if (h[i + 1] < h[i + 2]) {
                min = h[i + 1];
                i++;
            } else {
                min = h[i + 2];
                i += 2;
            }
            cost += min;
        }
        return cost;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n");
        int n = sc.nextInt();
        int h[] = new int[n];
        for (int i = 0; i < n; i++)
            h[i] = sc.nextInt();
        sc.close();
        System.out.print(minicost(n, h));
    }
}
