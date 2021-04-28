import java.util.Scanner;
/**
 * PerfectPermutation
 */
public class PerfectPermutation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        if (n % 2 ==  1)
            System.out.println(-1);
        else{
            for (int i = 0; i < n; i++){
                if(i % 2 == 0)
                    System.out.print(i+2+" ");
                else
                    System.out.print(i+" ");
            }
            System.out.println();
        }
        
    }
}