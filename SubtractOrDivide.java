import java.util.Scanner;
public class SubtractOrDivide {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            if(n == 1)
                System.out.println(0);
            else{
                int v = 0;
                if(n % 2 == 0){
                    v++;
                    if(n/2 != 1)
                        v++;
                }
                else{
                    v++;
                    n--;
                    v++;
                    if(n/2 != 1)
                        v++;
                }
                System.out.println(v);
            }
        }
        sc.close();
    }
}
