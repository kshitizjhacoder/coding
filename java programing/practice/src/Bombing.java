import java.util.*;

public class Bombing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int max = 0;
        sc.close();
        for (int i = 0; i < str.length(); i++) {
            int permax = 0;
            for (int j = i + 1; j < str.length(); j++) {
                if (uniqueCharactersInString(str.substring(i, j))) {
                    permax = j - i + 1;
                }
                max = (max > permax) ? max : permax;
            }
        }
        System.out.println(max);
    }

    static boolean uniqueCharactersInString(String strn) {
        char arr[] = strn.toCharArray();
        Arrays.sort(arr);
        for (int i = 0; i < strn.length() - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
}
