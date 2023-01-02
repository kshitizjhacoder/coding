import java.util.Scanner;

class maxsumnonoverlapping {
    static boolean overlapped(int a[], int b[]) {
        if (a[0] < b[0] && a[1] > b[1]) {
            return false;
        }
        return true;
    }

    static int maxsum(int a[][], int n) {
        int maxS = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][2];
            for (int j = i + 1; j < n; j++) {
                if (overlapped(a[i], a[j])) {
                    
                }
            }
        }
        return maxS;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length");
        int n = sc.nextInt();
        int a[][] = new int[n][3];
        for (int i = 0; i < n; i++) {
            a[i][0] = sc.nextInt();
            a[i][1] = sc.nextInt();
            a[i][2] = sc.nextInt();
        }
        sc.close();
    }
}