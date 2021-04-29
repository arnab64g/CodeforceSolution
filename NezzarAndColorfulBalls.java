import java.util.Scanner;
/**
 * NezzarAndColorfulBalls
 */
public class NezzarAndColorfulBalls {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int v;
            int max = 0;
            for (int j = 0; j < n; j++) {
                v = sc.nextInt();
                a[v-1]++;
            }
            for (int j = 0; j < n; j++)
                if(a[j] > max)
                    max = a[j];
            System.out.println(max);
        }
        sc.close();
    }
}