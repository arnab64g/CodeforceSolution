/**
 * ShortSubstrings
 */
import java.util.Scanner;
public class ShortSubstrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,  len = 2;
        String s, b;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            s = sc.next();
            char[] ch = s.toCharArray();
            len = ch.length;
           
            b = "";
            for (int j = 0; j < len-1; j += 2) {
                b += ch[j];
            }
            b += ch[len-1] ;
            System.out.println(b);
        }
        sc.close();
    }
}