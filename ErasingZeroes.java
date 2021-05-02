import java.util.Scanner;
/**
 * ErasingZeroes
 */
public class ErasingZeroes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            char[] ch = s.toCharArray();
            int bng = 0;
            int end = s.length() - 1;
            boolean res1 = false, res2 = false;
            for (int j = 0; j < end; j++) 
                if(ch[j] == '1'){
                    bng = j;
                    res1 = true;
                    break;
                }
            for (int j = end; j >= 0; j--) 
                if(ch[j] == '1'){
                    end = j;
                    res2 = true;
                    break;
                }
            int count = 0;
            for (int j = bng; j <= end; j++) 
                if (ch[j] == '0') 
                    count++;
            if(res1 && res2)
                System.out.println(count);
            else System.out.println(0);
        }
        sc.close();
    }
}