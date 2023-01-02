import java.util.*;

public class jobsequenceprobgfg {
    static int bestways(int d[], int p[]) {
        int i = 0, j, prof = 0;
        for (j = 1; j < 5; j++) {
            if (d[i] < d[j]) {
                prof += p[i] + p[j];
                i = j;
            }
        }
        return prof;
    }

    public static void main(String args[]) {
        char job[] = { 'a', 'b', 'c', 'd', 'e' };
        int deadline[] = { 1, 1, 2, 1, 3 };
        int profit[] = { 100, 19, 27, 25, 15 };
        int arr[][] = new int[5][3];
        for (int i = 0; i < 5; i++) {
            arr[i][0] = i;
            arr[i][1] = deadline[i];
            arr[i][2] = profit[i];
        }
        Arrays.sort(deadline);
        for (int i = 0; i < 5; i++) {

        }
        System.out.println(bestways(deadline, profit));
    }
}
