import java.util.Scanner;

public class NearestInterestingNumber {
    static int sumofdig(int n){
        int sum = 0;
        while(n != 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (true) {
            int v = sumofdig(n);
            if(v % 4 == 0) 
                break;
            else n++;
        }
        System.out.println(n);
        sc.close();
    }
}
