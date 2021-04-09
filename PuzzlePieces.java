import java.util.Scanner;

/**
 * PuzzlePieces
 */
public class PuzzlePieces {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n, m;
        int t;
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            n = sc.nextLong();
            m = sc.nextLong();
            if(n < 2 || m < 2)
                System.out.println("YES");
            else if(m == 2 && n == 2)
                System.out.println("YES");
            else System.out.println("NO");
        }
        sc.close();
    }
}