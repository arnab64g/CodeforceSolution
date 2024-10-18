import java.util.Arrays;
import java.util.Scanner;

/**
 * DistinctDigits
 */
public class DistinctDigits {

    static boolean isdistinct(int n) {
        boolean res = true;
        int[] a = new int[6];
        int v = 0;
        while (n != 0) {
            a[v] = n % 10;
            n /= 10;
            v++;
        }
        Arrays.sort(a, 0, v);
        for (int i = 0; i < v - 1; i++) {
            if (a[i] == a[i + 1]) {
                res = false;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int r = sc.nextInt();
        sc.close();
        int val = -1;
        for (int i = l; i <= r; i++) {
            if (isdistinct(i)) {
                val = i;
                break;
            }
        }
        System.out.println(val);

    }
}