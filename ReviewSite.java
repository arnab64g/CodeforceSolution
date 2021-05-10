import java.util.Scanner;
/**
 * ReviewSite
 */
public class ReviewSite {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int u = 0, d = 0;
            for (int j = 0; j < n; j++) {
                int r = sc.nextInt();
                switch (r) {
                    case 1:
                        u++;
                        break;
                    case 2:
                        d++;
                        break;
                    case 3:
                        u++;
                        break;
                }
            }
            System.out.println(u);
        }
        sc.close();
    }
}