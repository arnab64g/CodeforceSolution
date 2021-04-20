import java.util.Scanner;

/**
 * CommonSubsequence
 */
public class CommonSubsequence {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int val;
            boolean[] a = new boolean[1000];
            boolean[] b = new boolean[1000];
            for (int j = 0; j < n; j++){
                val = sc.nextInt();
                a[val-1] = true;
            }
            for (int j = 0; j < m; j++){
                val = sc.nextInt();
                b[val-1] = true;
            }
            int pos = 0;
            boolean res = false;
            for(int j =0; j < 1000; j++){
                if (a[j] && b[j]) {
                    res = true;
                    pos = j+1;
                    break;
                }
            }
            if (res) {
                System.out.println("YES");
                System.out.println("1 " + pos);
            }
            else System.out.println("NO");
        }
        sc.close();
    }
}