import java.util.Scanner;

/**
 * GiftsFixing
 */
public class GiftsFixing {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n;
        long mina, minb, count, difa, difb;
        long[] a, b;
        
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            a = new long[n];
            b = new long[n];
            count = 0;
            a[0] = sc.nextLong();
            mina = a[0];
            for (int j = 1; j < n; j++) {
                a[j] = sc.nextLong();
                if(a[j] < mina)
                    mina = a[j];
            }
            b[0] = sc.nextLong();
            minb = b[0];
            for (int j = 1; j < n; j++) {
                b[j] = sc.nextLong();
                if(b[j] < minb)
                    minb = b[j];
            }
            for (int j = 0; j < n; j++) {
                difa = a[j] - mina;
                difb = b[j] - minb;
                count += (difa > difb) ? difa : difb;
            }
            System.out.println(count);
        }
        sc.close();
    }
}