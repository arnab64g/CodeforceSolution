import java.util.Scanner;

public class MahmoudAndEhabAndTheEvenOddGame {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.close();
        if(n%2 == 1)
            System.out.println("Ehab");
        else System.out.println("Mahmoud");
    }
}
