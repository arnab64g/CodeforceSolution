import java.util.Scanner;

/**
 * SashaAndSticks
 */
public class SashaAndSticks {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long k = sc.nextLong();
        long nom = n/k;
        if(nom % 2 == 1)
            System.out.println("YES");
        else System.out.println("NO");
        sc.close();
    }
}