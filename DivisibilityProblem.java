import java.util.Scanner;
public class DivisibilityProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, a, b, d;
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            if(a%b == 0)
                d = 0;
            else
                d = b- a%b;
            System.out.println(d);
        }
        sc.close();
    }
}
