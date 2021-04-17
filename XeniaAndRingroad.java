/**
 * XeniaAndRingroad
 */
import java.util.Scanner;
public class XeniaAndRingroad {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long m, n, a, init = 1, tim = 0;   
        n = sc.nextInt();
        m = sc.nextInt();
        for (int i = 0; i < m; i++){
            a = sc.nextInt();
            if(a >= init)
                tim += a-init;
            else
                tim += n -init+a;
            init = a;
        }
        sc.close();
        System.out.println(tim);
    }
}
