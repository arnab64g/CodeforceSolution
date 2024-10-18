import java.util.Scanner;
/**
 * TwoRabbits
 */
public class TwoRabbits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            if ((y-x) % (a+b) == 0)
                System.out.println((y-x) / (a+b));
            else System.out.println(-1);
        }
        sc.close();
    }
}