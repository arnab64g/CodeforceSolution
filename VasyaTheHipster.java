import java.util.Scanner;
public class VasyaTheHipster{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r, b, mxd, mxs;
        r = sc.nextInt();
        b = sc.nextInt();
        mxd = (r < b) ? r : b;
        mxs = (r > b) ? r : b;
        mxs -= mxd;
        mxs /= 2;
        sc.close();
        System.out.println(mxd+" "+mxs);
    }
}
