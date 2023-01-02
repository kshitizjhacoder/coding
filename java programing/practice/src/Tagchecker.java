import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Tagchecker {
    public static Stack<String> tag = new Stack<String>();
    public static int i = 0;
    public static Queue<String> state = new LinkedList<>();

    static String subString(String str) {
        String s = "";
        while (i < str.length()) {
            s += str.charAt(i);
            if (str.charAt(i) == '>')
                return s;
            i++;
        }
        return null;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());
        while (testCases > 0) {
            String line = in.nextLine();
            String words = "";
            // Write your code here
            Boolean b = line.startsWith("<");
            while (i < line.length()) {
                if (b) {
                    tag.push(subString(line));
                    // System.out.println(i);
                    b = line.startsWith("<", i);
                } else {
                    while (!b && i < line.length()) {
                        b = line.startsWith("<", i);
                        words += line.charAt(i);
                        i++;
                    }
                    state.add(words);
                    words = "";
                }
            }
            System.out.println(tag);
            Iterator it = state.iterator();
            while (it.hasNext())
                System.out.println(it.next());
            // System.out.println("a");
            testCases--;
        }
        in.close();
    }
}
