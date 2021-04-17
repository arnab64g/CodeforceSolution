import java.util.Scanner;
/**
 * FairDivision
 */
public class FairDivision {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] wt = {0, 0};
            for (int j = 0; j < n; j++) {
                int w = sc.nextInt();
                wt[w-1]++;
            }
            if(wt[1]%2 == 0){
                if(wt[0]%2 == 1)
                    System.out.println("NO");
                else System.out.println("YES");
            }
            else{
                if(wt[0] >= 2 && wt[0] % 2 == 0 )
                   System.out.println("YES");
                else System.out.println("NO");
            }
        }
        sc.close();
    }
}
