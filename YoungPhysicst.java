/**
 * YoungPhysicst
 */
import java.util.Scanner;
public class YoungPhysicst {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int [][]a = new int[n][3];
        int []sum = {0, 0, 0};
        for(int i = 0; i < n ; i++){
            for(int j = 0; j< 3;j++){
                a[i][j] = sc.nextInt();
                sum[j] += a[i][j];
            }
        }
        sc.close();
        boolean result = false;
        for(int i = 0; i<3; i++){
            if (sum[i] == 0) {
                result = true;
            }
            else {
                result = false;
                break;
            }
        }
        if (result) 
            System.out.println("YES");
        else System.out.println("NO");
    }
    
}