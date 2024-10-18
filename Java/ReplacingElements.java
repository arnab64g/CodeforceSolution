import java.util.Scanner;
import java.util.Arrays;
/**
 * ReplacingElements
 */
public class ReplacingElements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int d = sc.nextInt();
            boolean res = true;
            int[] a = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                if(a[j] > d)
                    res = false;
            }
            if(res)
                System.out.println("YES");
            else{
                Arrays.sort(a);
                if((a[0] + a[1]) <= d)
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
        }
        sc.close();
    }
}
