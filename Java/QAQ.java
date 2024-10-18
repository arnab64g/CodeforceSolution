import java.util.Scanner;
public class QAQ {
    static int lefts(char[] c, int n){
        int count = 0;
        for (int i = 0; i < n; i++)
            if(c[i] == 'Q')
                count++;
        return count;
    }
    static int rights(char[] c, int n, int len){
        int count = 0;
        for (int i = n+1; i < len; i++) 
            if(c[i] == 'Q')
                count++;
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        sc.close();
        int l = s.length();
        char[] c = s.toCharArray();
        int count = 0;
        for (int i = 0; i < l; i++) 
            if (c[i] == 'A') 
                count += lefts(c, i)*rights(c, i, l);
        System.out.println(count);
    }
}
