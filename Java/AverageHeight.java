import java.util.Scanner;
/**
 * AverageHeight
 */
public class AverageHeight {

    static void VwHg(int[] a, int l){
        for (int i = 0; i < l; i++)
            System.out.print(a[i] + " ");
    }
    static void AvHg(int[] a){
        int l = a.length;
        int[] on = new int[l];
        int[] en = new int[l];
        int ot = 0, et = 0;
        for (int i = 0; i < l; i++) {
            if(a[i] % 2 == 1)
                on[ot++] = a[i];
            else en[et++] = a[i];
        }
        VwHg(on, ot);
        VwHg(en, et);
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }
            AvHg(a);
        }
        sc.close();
    }
}