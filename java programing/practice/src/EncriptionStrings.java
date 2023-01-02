import java.util.*;

public class EncriptionStrings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String st = sc.nextLine();
        int l = st.length(), i, count = 0;
        sc.close();
        for (i = 0; i < l - 1; i++) {
            if (st.charAt(i) == ' ')
                count++;
        }
        l = l - count;
        count = 0;
        // int x1 = (int) Math.floor(Math.sqrt((double) l));
        int x2 = (int) Math.ceil(Math.sqrt((double) l));
        String obj[] = new String[x2];
        for (i = 0; i < x2; i++)
            obj[i] = "";
        for (i = 0; i < st.length(); i++) {
            if (st.charAt(i) == ' ')
                continue;
            if (count == x2) {
                // System.out.println();
                count = 0;
            }
            obj[count] += st.charAt(i);
            // System.out.print(st.charAt(i));
            count++;

        }
        for (i = 0; i < x2; i++) {
            System.out.print(obj[i] + " ");
        }

    }
}
