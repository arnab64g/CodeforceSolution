import java.util.Arrays;
import java.util.Scanner;

public class ThreeSwimmers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            long p = sc.nextLong();
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();
            long[] times = new long[3];
            times[0] = a - p % a;
            times[1] = b - p % b;
            times[2] = c - p % c;
            if (times[0] == a)
                times[0] = 0;
            if (times[1] == b)
                times[1] = 0;
            if (times[2] == c)
                times[2] = 0;
            Arrays.sort(times);
            System.out.println(times[0]);
        }
        sc.close();
    }
}
