import java.util.Scanner;

/**
 * MultiplyBy2DivideBy6
 */
public class MultiplyBy2DivideBy6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n, count;
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            count = 0;
            while (n != 1) {
                if (n % 6 == 0) {
                    n /= 6;
                    count++;
                } else {
                    n *= 2;
                    if (n % 6 == 0) {
                        n /= 6;
                        count += 2;
                    } else {
                        count = -1;
                        break;
                    }
                }
            }
            System.out.println(count);
        }
        sc.close();
    }
}