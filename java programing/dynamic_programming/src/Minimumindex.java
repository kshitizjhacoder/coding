import java.util.*;

class Minimumindex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            arr.add(a);
        }
        System.out.println(arr.get(2));
        int sum = 0;
        int ind = 0;
        if (n == 1)
            System.out.println(arr.get(0));
        while (!arr.isEmpty()) {
            int min = Integer.MAX_VALUE;
            // System.out.println("s");
            for (int j = 1; j < arr.size(); j++) {
                // System.out.println("a");
                int item = arr.get(j);
                if (min > item) {
                    min = item;
                    ind = j;
                    System.out.println(min + " " + ind);
                }
            }
            sum += min;
            arr.remove(ind - 1);
            arr.remove(ind - 1);
            if (ind - 1 < arr.size() && ind - 1 >= 0) {
                arr.remove(ind - 1);
            }
        }
        System.out.println(sum);
        sc.close();
    }
}