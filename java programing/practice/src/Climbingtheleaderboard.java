import java.util.*;

public class Climbingtheleaderboard {
    static int[] climbleader(int rankers[], int plays[]) {
        List<Integer> ranks = new ArrayList<>();
        // ArrayList<Integer> res = new ArrayList<>();
        int res[] = new int[plays.length];
        int i, r = 1, j;
        ranks.add(r);
        for (i = 1; i < rankers.length; i++) {
            if (rankers[i - 1] == rankers[i])
                ranks.add(r);
            else
                ranks.add(++r);
        }
        // for (i = 0; i < ranks.size(); i++)
        // System.out.print(ranks.get(i) + " ");
        // System.out.println(plays.length + " " + rankers.length);
        for (i = 0; i < plays.length; i++) {
            for (j = 0; j < rankers.length; j++) {
                if (plays[i] < rankers[rankers.length - 1 - j]) {
                    res[i] = ranks.get(rankers.length - 1 - j) + 1;
                    break;
                } else if (plays[i] == rankers[rankers.length - 1 - j]) {
                    res[i] = ranks.get(rankers.length - 1 - j);
                    break;
                } else {
                    res[i] = ranks.get(rankers.length - 1 - j) - 1;
                    if (ranks.get(rankers.length - 1 - j) == 1)
                        res[i] = 1;
                }
                // System.out.print(j + " ");
            }
        }
        return res;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i;
        int n = sc.nextInt();
        int rankers[] = new int[n];
        for (i = 0; i < n; i++)
            rankers[i] = sc.nextInt();
        int m = sc.nextInt();
        int plays[] = new int[m];
        for (i = 0; i < m; i++)
            plays[i] = sc.nextInt();
        sc.close();
        int[] result = climbleader(rankers, plays);
        for (i = 0; i < m; i++)
            System.out.print(result[i] + " ");
    }
}
