import java.util.Scanner;

public class osumania {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int t = scanner.nextInt();

            for (int i = 0; i < t; i++) {
                int n = scanner.nextInt();
                String[] strings = new String[501];
                
                for (int j = 0; j < n; j++) {
                    strings[j] = scanner.next();
                }
                
                for (int j = n - 1; j >= 0; j--) {
                    char[] str = strings[j].toCharArray();
            
                    for (int k = 0; k < str.length; k++) {
                        if (str[k] == '#') {
                            System.out.print( (k+1) + " ");
                        }
                    }
                }
            
                System.out.println();
            }
        }
    }
}