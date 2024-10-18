import java.util.Scanner;
/**
 * C+=
 */
public class CPlusEqualto {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            int count = 0;
            while (true) {
                if(a < b)
                    a += b;
                else b += a;
                count++;
                if (a > n || b > n) 
                    break; 
            }
            System.out.println(count);
        }
        sc.close();
    }
}