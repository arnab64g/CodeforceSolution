import java.util.Scanner;
public class EvenSubsetSumProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++)
                a[j] = sc.nextInt();
            if (n == 1 && a[0] % 2 == 1) {
                System.out.println(-1);
                continue;
            }
            for (int j = 0; j < n; j++) {
                if(a[j] % 2 == 0){
                    System.out.println(1);
                    System.out.println(j+1);
                    break;
                }
                else if(a[j] % 2 == 1 && a[j+1] % 2 == 1){
                    System.out.println(2);
                    System.out.println((j+1)+" "+(j+2));
                    break;
                }
            }
        }
        sc.close();
    }
}
