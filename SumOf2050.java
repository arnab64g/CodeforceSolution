import java.util.Scanner;

/**
 * SumOf2050
 */
public class SumOf2050 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n, count, res;
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            n = sc.nextLong();
            if (n % 2050 != 0)
                System.out.println("-1");
            else {
                count = n / 2050;
                res = 0;
                while (count > 0) {
                    res += count % 10;
                    count /= 10;
                }
                System.out.println(res);
            }
        }
        sc.close();
    }
}