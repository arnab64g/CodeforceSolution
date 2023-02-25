import java.util.Arrays;
import java.util.Scanner;

class MediumNumber{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            int[] a = new int[3];
            for(int j = 0; j < 3; j++)
                a[j] = sc.nextInt();
            Arrays.sort(a);

            System.out.println(a[1]);
        }
    }
}