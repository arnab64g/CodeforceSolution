import java.util.Scanner;
public class RepeatingCipher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        char[] ch = s.toCharArray();
        int i = 0, j = 1;
        String st = "";
        while(i < n){
            st += ch[i];
            i += j;
            j++;
        }
        System.out.println(st);
        sc.close();
    }
}
