import java.util.*;
import java.util.StringTokenizer;

public class Stringtokenizer {
    String name, dob;

    void inputAndDisplay() {
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        dob = sc.nextLine();
        StringTokenizer st = new StringTokenizer(dob, "/");
        int n = st.countToken();
        while (st.hasMoreToken()) {
            if (n > 1)
                System.out.print(st.nextToken() + ",");
            else
                System.out.println(st.nextToken() + ">");
        }
    }
}
