import java.util.Scanner;

public class fractknapsack {
    static private double[] ratio, weight, profit, soln;
    static private double capacity;

    fractknapsack() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of elements");
        int n = sc.nextInt();
        ratio = new double[n];
        weight = new double[n];
        profit = new double[n];
        soln = new double[n];
        System.out.println("Enter the weights");
        for (int i = 0; i < n; i++)
            weight[i] = sc.nextDouble();
        System.out.println("enter the profits");
        for (int i = 0; i < n; i++)
            profit[i] = sc.nextDouble();
        System.out.println("Enter the capacity");
        capacity = sc.nextDouble();
        sc.close();
    }

    static int getNext() {
        int ind = -1, i;
        double h = 0;
        for (i = 0; i < ratio.length; i++) {
            if (ratio[i] > h) {
                h = ratio[i];
                ind = i;
            }
        }
        return ind;
    }

    void fill() {
        double currentweight = 0;
        double currentprofit = 0;
        int i, item;
        for (i = 0; i < profit.length; i++)
            ratio[i] = profit[i] / weight[i];
        while (currentweight < capacity) {
            item = getNext();
            if (item == -1)
                break;
            if (weight[item] <= capacity) {
                currentweight += weight[item];
                currentprofit += profit[item];
                soln[item] = 1;
                ratio[item] = 0;
            } else {
                currentprofit += ((capacity - currentweight) / weight[item]) * profit[item];
                soln[item] = ((capacity - currentweight) / weight[item]);
                currentweight += (capacity - currentweight);
                break;
            }
        }
        System.out.println("Maximum profit" + currentprofit);
        for (i = 0; i < soln.length; i++) {
            System.out.print(soln[i] + " ");
        }
    }

}
