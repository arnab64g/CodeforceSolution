import java.util.Scanner;
public class BrainsPhotos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();
        int pix = m*n;
        char ch;
        boolean res = true;
        for (int i = 0; i < pix; i++) {
            ch = sc.next().charAt(0);
            if(ch == 'C' || ch == 'M' || ch == 'Y')
                res = false;
        }
        if(!res)
            System.out.println("#Color");
        else System.out.println("#Black&White");
    }
}
