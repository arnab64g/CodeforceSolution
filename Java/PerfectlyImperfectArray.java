import java.util.Scanner;
import java.lang.Math;

/**
 * PerfectlyImperfectArray
 */
public class PerfectlyImperfectArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int root;
            boolean res = false;
            for (int j = 0; j < n; j++)
                a[j] = sc.nextInt();
            for (int j = 0; j < n; j++) {
                root = (int) Math.sqrt((double) a[j]);
                if (root * root != a[j]) {
                    res = true;
                    break;
                }
            }
            if (res)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }
}
