import java.util.Scanner;
/**
 * RedAndBlueBeans
 */
public class RedAndBlueBeans {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int r, b, d, max, min, count;
        for (int i = 0; i < t; i++) {
            r = sc.nextInt();
            b = sc.nextInt();
            d = sc.nextInt();
            if(r > b){
                max = r;
                min = b;
            }
            else {
                max = b;
                min = r;
            }
            count = (max - min) / min;
            if(count < d)
                System.out.println("YES");
            else if(count == d){
                if((max-min)%min == 0)
                    System.out.println("YES");
                else System.out.println("NO");
            }
            else System.out.println("NO");
        }
        sc.close();
    }
}