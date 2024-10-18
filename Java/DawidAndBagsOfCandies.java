import java.util.Scanner;

public class DawidAndBagsOfCandies {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a1 = sc.nextInt();
        int a2 = sc.nextInt();
        int a3 = sc.nextInt();
        int a4 = sc.nextInt();
        int sum = a1 + a2 + a3 + a4;
        if (sum % 2 == 1)
            System.out.println("NO");
        else {
            sum /= 2;
            if (a1 == sum || a2 == sum || a3 == sum || a4 == sum)
                System.out.println("YES");
            else if (a1 + a2 == sum || a2 + a3 == sum || a1 + a3 == sum)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }
}
