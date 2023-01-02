import java.util.*;
// import java.lang.*;

public class BiggerisGreaterhackerrank {
    static void isbigger(String st) {
        String cmp1 = "";
        String cmp2 = "";
        int c1 = st.length() - 1;
        int c2 = c1 - 1;
        cmp1 += st.charAt(c1);
        cmp2 += st.charAt(c2);
        while (c1 >= 0) {
            if ((cmp1.compareTo(cmp2)) > 0) {
                st = st.substring(0, c2 - 1) + cmp1 + cmp2;
            }

        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            sc.next();
            String st = sc.nextLine();
            isbigger(st);
        }
        sc.close();
    }
}
