import java.util.Arrays;
import java.util.Scanner;

/**
 * Heist
 */
public class Heist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();
        Arrays.sort(a);
        for (int i = 1; i < n; i++)
            count += a[i] - a[i - 1] - 1;
        System.out.println(count);
        sc.close();
    }
}
