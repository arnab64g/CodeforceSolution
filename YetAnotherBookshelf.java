import java.util.Scanner;
/**
 * YetAnotherBookshelf
 */
public class YetAnotherBookshelf {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int inpt;
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int end = 0;
            boolean[] books = new boolean[n];
            for (int j = 0; j < n; j++) {
                inpt = sc.nextInt();
                if(inpt == 1){
                    books[j] = true;
                    end = j;
                }
                else books[j] = false; 
            }
            int st = 0;
            int j = 0;
            while (j < n) {
                if(books[j]){
                    st = j;
                    break;
                }
                j++;
            }
            int count = 0;
            for (int k = st; k <= end; k++) 
                if (!books[k])
                    count++;
            System.out.println(count);
        }
        sc.close();
    }
}