import java.util.Scanner;
import java.lang.Math;
public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0, y = 0, n;
        int [][]a = new int[5][5];
        for(int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++) {
                a[i][j] = sc.nextInt();
                if (a[i][j] == 1) {
                    x = i;
                    y = j;
                }
            }
        sc.close();
        n = Math.abs(x-2) + Math.abs(y-2);
        System.out.println(n);
    }
}
