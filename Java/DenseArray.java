import java.util.Scanner;
/**
 * DenseArray
 */
public class DenseArray {
    static int ToAddNumbers(int a1, int a2){
        int max  = (a1 > a2) ? a1:a2;
        int min  = (a1 < a2) ? a1:a2;
        if(max <= min*2)
            return 0;
        else{
            int count = 0;
            while(max > min*2){
                count++;
                min *= 2;
            }
            return count;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int a1, a2, n;
        for (int j = 0; j < t; j++) {
            int count = 0;
            n = sc.nextInt();
            a1 = sc.nextInt();
            for (int i = 1; i < n; i++) {
                a2 = sc.nextInt();
                count += ToAddNumbers(a1, a2);
                a1 = a2;
            }
            System.out.println(count);
        }
        sc.close();
    }
}
