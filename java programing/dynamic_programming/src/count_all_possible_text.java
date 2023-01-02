
import java.util.Scanner;

//1:"abc",2:"def",3:"ghi",4:"jkl",5:"mno",6:"pqr",7:"stu",8:"wxyz"
//1:a,11:b,111:c
public class count_all_possible_text {
    static int count = 0;
    static char ch[][] = { { 'a', 'b', 'c' }, { 'd', 'e', 'f' }, { 'g', 'h', 'i' }, { 'j', 'k', 'l' },
            { 'm', 'n', 'o' },
            { 'p', 'q', 'r' }, { 's', 't',
                    'u' },
            { 'w', 'x', 'y', 'z' } };
    static int pos = 0;

    static int len(int num) {
        if (num == 0)
            return 0;
        return 1 + len(num / 10);
    }

    static void freqeuncy(int num, int ind) {
        int l = len(num);
        int d = num / (int) (Math.pow(10, l - 1));
        if (d - 1 == ind) {
            count++;
        } else {
            if (count != 0) {
                // ch[ind][count];
            }
        }
        ind = d - 1;
        freqeuncy(num % (int) (Math.pow(10, l - 1)), ind);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        freqeuncy(num, -1);
        sc.close();
    }
}
