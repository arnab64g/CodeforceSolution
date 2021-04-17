import java.util.Scanner;
/**
 * RestoreThePermutationByMerger
 */
public class RestoreThePermutationByMerger {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            boolean[] a = new boolean[n];
            int[] array = new int[n];
            int count = 0;
            for (int j = 0; j < n*2; j++) {
                int value = sc.nextInt();
                if(!a[value - 1]){
                    array[count++] = value;
                    a[value - 1] = true;
                }
            }
            for (int x : array)
                System.out.print(x+" ");
            System.out.println();
        }
        sc.close();
    }
}
