import java.util.Scanner;

/**
 * RoadToZero
 */
public class RoadToZero {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long x = sc.nextInt();
            long y = sc.nextInt();
            long a = sc.nextInt();
            long b = sc.nextInt();
            long cost1 = a * (x+y);
            long cost2 = a * Math.abs(x - y);
            long min = (x < y) ? x : y;
            cost2 += min * b;
            if(cost1 < cost2)
                System.out.println(cost1);
            else System.out.println(cost2);
        }
        sc.close();
    }
}