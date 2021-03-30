import java.io.Console;
import java.util.Scanner;
public class NewYearAndHurry {
    public static void main(String[] args) {
        int n, m, tih, count = 0, tm = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        sc.close();
        tih = 240-m;
        while (true) {
            tm += (count+1)*5;
            if(tm <= tih ){
                count++;
                if(count == n)
                    break;
            }
            else break;
        }
        System.out.println(count);
        
    }
}
