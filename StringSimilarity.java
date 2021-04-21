import java.util.Scanner;
public class StringSimilarity {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            String s = sc.next();
            char[] ch = s.toCharArray();
            String empty = "";
            empty += ch[0];           
            for (int j = 1; j < n; j++) 
                empty += ch[j*2];
            System.out.println(empty);
        }
        sc.close();
    }
}
