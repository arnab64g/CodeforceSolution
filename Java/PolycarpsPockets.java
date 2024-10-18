import java.util.Scanner;
public class PolycarpsPockets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[100];
        int coin;
        for (int i = 0; i < n; i++) {
            coin = sc.nextInt();
            a[coin-1]++;
        }
        int max = a[0];
        for (int i = 0; i < 100; i++) 
            if (a[i] > max) 
                max = a[i];
        System.out.println(max);
        sc.close();
    }
}
