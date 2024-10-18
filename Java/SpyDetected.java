import java.util.Scanner;

/**
 * SpyDetected
 */
public class SpyDetected {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int value;
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[100];
            int[] index = new int[100];
            int pos = 0;
            for (int j = 0; j < n; j++) {
                value = sc.nextInt();
                a[value-1]++;
                index[value - 1] = j;
            }
            for (int j = 0; j < 100; j++) 
                if(a[j] == 1){
                    pos = index[j]+1;
                    break;
                }
            System.out.println(pos);
        }
        sc.close();
    }
}