import java.util.Scanner;
/**
 * MaximumIncrease
 */
public class MaximumIncrease {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int vl = sc.nextInt();
        int temp = vl;
        int count = 1;
        int max = count;
        for(int i = 1; i < n; i++){
            vl = sc.nextInt();
            if (vl > temp)
                count++;
            else count = 1;
            if (count > max) 
                max = count;
            temp = vl;
        }
        System.out.println(max);
        sc.close();
    }
}