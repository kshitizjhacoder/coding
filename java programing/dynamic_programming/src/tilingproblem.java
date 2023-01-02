public class tilingproblem {
    static int noofway(int n) {
        if (n <= 2)
            return n;
        return noofway(n - 1) + noofway(n - 2);
    }

    public static void main() {
        System.out.println("the value is = " + noofway(4));
    }
}
