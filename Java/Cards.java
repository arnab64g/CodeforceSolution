import java.util.Arrays;
import java.util.Scanner;
public class Cards {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        String s = sc.next();
        sc.close();
        char[] ch = s.toCharArray();
        int[] cn = {0, 0, 0, 0, 0};
        for (int i = 0; i < num; i++) {
            switch (ch[i]) {
                case 'z':
                    cn[3]++;
                    break;
                case 'e':
                    cn[2]++;
                    break;
                case 'r':
                    cn[4]++;
                    break;
                case 'o':
                    cn[0]++;
                    break;
                case 'n':
                    cn[1]++;
                    break;
                default:
                    break;
            }
        }
        int noo = cn[0];
        Arrays.sort(cn, 0, 2);
        Arrays.sort(cn, 3, 4);
        int one = cn[0];
        int zero = noo - one;
        for (int i = 0; i < one; i++) 
            System.out.print(1+" ");
        for (int i = 0; i < zero; i++) 
            System.out.print(0+" ");
        System.out.println();
    }
}
