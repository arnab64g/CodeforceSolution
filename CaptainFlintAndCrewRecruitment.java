import java.util.Scanner;
/**
 * CaptainFlintAndCrewRecruitment
 */
public class CaptainFlintAndCrewRecruitment {
    static void resultNP(int n){
        if (n < 31)
            System.out.println("NO");
        else{
            int[] a = new int[4];
            a[0] = 2*3;
            a[1] = 2*5;
            a[2] = 2*7;
            a[3] = n-2*15;
            if(a[3] == a[0]){
                a[2]++;
                a[3]--;
            }
            else if(a[3] == a[1]){
                a[2]++;
                a[3]--;
            }
            else if(a[3] == a[2]){
                a[2]++;
                a[3]--;
            }
            System.out.println("YES");
            for (int i = 0; i < 4; i++) 
                System.out.print(a[i]+" ");
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            resultNP(n);
        }
        sc.close();
    }
}