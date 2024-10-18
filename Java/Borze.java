import java.util.Scanner;
public class Borze {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] c = s.toCharArray();
        int len = s.length();
        int i = 0;
        while (i < len) {
            if (c[i] == '.') {
                System.out.print(0);
                i++;
            }
            else if (c[i] == '-') {
                if (c[i+1] == '.')
                    System.out.print(1);
                else if(c[i+1] == '-')
                    System.out.print(2);
                i += 2;
            }
        }
        sc.close();
    }
}
