import java.util.Scanner;
/**
 * ThreePilesOfCandies
 */
public class ThreePilesOfCandies {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();
            long total = a+b+c;
            System.out.println(total/2);
        }
        sc.close();
    }
}