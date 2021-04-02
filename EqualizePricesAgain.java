/**
 * EqualizePricesAgain
 */
import java.util.Scanner;
public class EqualizePricesAgain {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, n, p, sum;
        
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            sum =0;
            for (int j = 0; j < n; j++) {
                p = sc.nextInt();
                sum += p;
            }
            p = sum/n;
            if(sum % n != 0)
                p++;
            System.out.println(p);
        }
        sc.close();
    }
}