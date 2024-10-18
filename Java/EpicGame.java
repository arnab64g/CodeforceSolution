import java.util.Scanner;
/**
 * EpicGame
 */
public class EpicGame {
    static int gcd(int a, int n){
        int max = n;
        int min = a;
        if (a > n) {
            max = a;
            min = n;
        }
        if(max%min == 0)
            return min;
        else return gcd(min, max-min);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        boolean res = false;
        while (true) {
            n -= gcd(a, n);
            if (n == 0) {
                res = true;
                break;
            }
            n -= gcd(b, n);   
            if (n == 0) 
                break;
        }
        if (res) 
            System.out.println("0");
        else System.out.println("1");
        sc.close();
    }
}