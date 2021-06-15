import java.util.Scanner;

/**
 * CaseOfTheZerosAndOnes
 */
public class CaseOfTheZerosAndOnes {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        char[] ch = s.toCharArray();
        int ones = 0, zeros = 0;
        for (int i = 0; i < n; i++) {
            if(ch[i] == '1')
                ones++;
            else zeros++;
        }
        System.out.println(Math.abs(ones - zeros));
        sc.close();
    }
}