import java.util.Scanner;

public class DreamoonAndStairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.close();
        if(n < m){

            System.out.println(-1);
            return;
        }
        int str = n / 2;
        if(n % 2 == 1)
            str++;
        int ext = m - str%m;
        if(str % m == 0){
            System.out.println(str);
            return;
        }
        if(ext <= str)
            System.out.println(ext+str);
        else System.out.println(-1);        
    }
}
