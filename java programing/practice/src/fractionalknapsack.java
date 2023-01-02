// import java.util.Arrays;

public class fractionalknapsack {
    static void maximizedWeight(int val[], int wgt[], int sackwgt) {
        double fractionpart[] = new double[3];
        int i, j, max_elem = 0;
        double temp = 0.0;
        boolean swap = false;
        for (i = 0; i < 3; i++) {
            fractionpart[i] = (double) val[i] / (double) wgt[i];
            // System.out.println(fractionpart[i]);
        }
        for (i = 0; i < 3; i++) {
            swap = false;
            for (j = 0; j < 3 - i - 1; j++) {
                if (fractionpart[j] < fractionpart[j + 1]) {
                    temp = fractionpart[j];
                    fractionpart[j] = fractionpart[j + 1];
                    fractionpart[j + 1] = temp;
                    max_elem = wgt[j];
                    wgt[j] = wgt[j + 1];
                    wgt[j + 1] = max_elem;
                    temp = val[j];
                    val[j] = val[j + 1];
                    val[j + 1] = max_elem;
                    swap = true;
                }
            }
            if (swap == false)
                break;
        }
        for (i = 0; sackwgt > 0 && i < 3; i++) {
            if (sackwgt > wgt[i]) {
                sackwgt -= wgt[i];
                max_elem += val[i];

            } else {

                max_elem += (int) ((double) ((double) sackwgt / (double) wgt[i]) * (double) val[i]);
                sackwgt = 0;
            }
        }
        System.out.println(max_elem);
    }

    public static void main(String args[]) {
        int val[] = { 60, 100, 120 };
        int wgt[] = { 10, 20, 30 };
        int sackwgt = 50;
        maximizedWeight(val, wgt, sackwgt);
    }
}
