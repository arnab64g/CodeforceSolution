import java.util.Scanner;

/**
 * OddDivisor
 */
public class OddDivisor {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n;
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            n = sc.nextLong();
            while (n % 2 == 0)
                n /= 2;
            if (n == 1)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
        sc.close();
    }
}