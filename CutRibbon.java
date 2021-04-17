import java.util.Scanner;
public class CutRibbon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, a, b, c, count = 1, temp;
        n = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        sc.close();
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        int top = 0;
        int[] array = new int[4002];
        int bc, sm = 1;
        int cb = n/b;
        int cc = n/c;
        int len = 0, max = 0;
        for (int i = 0; i <= cc; i++) {
            int j;
            for (j = 0; j <= cb; j++) {
                bc = i*c+j*b;
                sm = n - bc;
                if (sm%a == 0) {
                    sm /= a;
                    len = sm*a+i*c+j*b;
                    break;
                }
            }
            if (len == n) {
                count = i+j+sm;
                len = 0;
                array[top] = count;
                top++;
            }
        }
        for (int i = 0; i < top; i++)
            if(array[i] > max)
                max = array[i];
        System.out.println(max);
    }
}
