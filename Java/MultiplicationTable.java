import java.util.Scanner;

/**
 * MultiplicationTable
 */
public class MultiplicationTable {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int count = 0;
        for (int i = 1; i <= n; i++) 
            if(x / i <= n && x % i == 0)
                count++;
        System.out.println(count);
        sc.close();
    }
}