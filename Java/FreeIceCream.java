import java.util.Scanner;
public class FreeIceCream {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int c = sc.nextInt();
        char s;
        long num = c;
        int br,  dist = 0;
        for (int i = 0; i < k; i++) {
            s = sc.next().charAt(0);
            br = sc.nextInt();
            if (s == '+')
                num += br;
            else if (br <= num)
                num -= br;
            else dist++; 
        }
        sc.close();
        System.out.println(num+" "+dist);
    }
}
