import java.util.*;

public class checkrepetition {
    static boolean check(String s) {
        HashSet<Character> str = new HashSet<>();
        for (int i = 0; i < s.length(); i++)
            str.add(s.charAt(i));
        if (str.size() == s.length())
            return true;
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(check(s.substring(0, 1)) + " " + s.substring(0, 1).length());
        sc.close();
    }
}
