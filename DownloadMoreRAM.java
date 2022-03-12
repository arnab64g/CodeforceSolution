import java.util.LinkedList;
import java.util.Scanner;
/**
 * DownloadMoreRAM
 */
public class DownloadMoreRAM {
    /**
     * DRam
     */

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rm;
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[1001];
            LinkedList<Integer>[] ll = new LinkedList[1001];    
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                if(ll[a[j]] == null)
                    ll[a[j]] = new LinkedList<>();
            }
                
            for (int j = 0; j < n; j++) {
                rm = sc.nextInt();
                ll[a[j]].add(rm);
            }
            for (int j = 1; j < 1001; j++) {
                if(ll[j] == null)
                    continue;
                if (j <= k){
                    for (int x : ll[j]) {
                        k += x;
                    }
                } 
                else break;
            }
            System.out.println(k);
        }
        sc.close();
    }
}