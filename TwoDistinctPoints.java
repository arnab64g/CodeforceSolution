import java.util.Scanner;

public class TwoDistinctPoints {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int l1 = sc.nextInt();
            int r1 = sc.nextInt();
            int l2 = sc.nextInt();
            int r2 = sc.nextInt();
            int a = (l1 + r1) / 2;
            int b = (l2 + r2) / 2;
            if (a == b)
                b++;
            System.out.println(a + " " + b);
        }
        sc.close();
    }
}
