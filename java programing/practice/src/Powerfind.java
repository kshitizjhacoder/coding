import java.util.*;

// import javax.swing.plaf.synth.SynthStyle;

public class Powerfind {
    static double pow(double x, int n) {
        if (n == 0)
            return 1;
        if (n == 1 || n == -1)
            return x;
        if (n < 0) {
            System.out.println(x + " " + n);
            x = (x * pow(x, n + 1));
            return 1 / x;
        }
        return x * pow(x, n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        int n = sc.nextInt();
        System.out.println(pow(x, n));
        sc.close();
    }
}
