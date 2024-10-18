import java.util.Scanner;

/**
 * AlexAndARhombus
 */
public class AlexAndARhombus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        n = 2*n - 1;
        int sq = (n*n)/2;
        if(n*n % 2 == 1)
            sq++;
        System.out.println(sq);
    }
}