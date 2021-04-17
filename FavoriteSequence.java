import java.util.Scanner;
/**
 * FavoriteSequence
 */
public class FavoriteSequence {
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
           int n = sc.nextInt();
           int[] a = new int[n];
           int[] b = new int[n];
           int pt1 = 0, pt2 = n-1;
           for (int j = 0; j < n; j++) 
               a[j] = sc.nextInt();
           for (int j = 0; j < n; j++) {
               if(j%2 == 0)
                   b[j] = a[pt1++];
                else b[j] = a[pt2--];
           }
           for (int x : b) 
                System.out.print(x+" ");    
            System.out.println();           
        }
        sc.close();
    }
}
