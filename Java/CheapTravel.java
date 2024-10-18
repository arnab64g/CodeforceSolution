import java.util.Scanner;
/**
 * CheapTravel
 */
public class CheapTravel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        int costa = n*a;
        int costb = (n/m)*b;
        int exr = n%m;
        if(exr != 0){
            int excost = a*exr;
            costb += (b < excost) ? b : excost;
        }
        System.out.println((costa < costb) ? costa : costb);
    }
}
