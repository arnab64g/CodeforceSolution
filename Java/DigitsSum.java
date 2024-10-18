import java.util.Scanner;

public class DigitsSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            if(n % 10 < 9)
                System.out.println(n / 10);
            else System.out.println(1 + n / 10);
        }
        sc.close();
    }
}
