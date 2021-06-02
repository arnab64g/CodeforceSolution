import java.util.Scanner;

public class CrazyComputer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int[] t = new int[n];
        for (int i = 0; i < n; i++)
            t[i] = sc.nextInt();
        sc.close();
        int count = 1;
        int dt;
        for (int i = 1; i < n; i++) {
            dt = t[i] - t[i - 1];
            if (dt > c)
                count = 1;
            else
                count++;
        }
        System.out.println(count);
    }
}
