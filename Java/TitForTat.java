import java.util.Scanner;

/**
 * TitForTat
 */
public class TitForTat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++)
                a[j] = sc.nextInt();
            int cnt = 0;
            while (0 < k) {
                while (a[cnt] > 0) {
                    a[cnt]--;
                    a[n - 1]++;
                    if (--k <= 0)
                        break;
                }
                if (a[cnt] == 0)
                    cnt++;
                if (cnt >= n - 1)
                    break;
            }
            for (var x : a)
                System.out.print(x + " ");
            System.out.println();
        }
        sc.close();
    }
}