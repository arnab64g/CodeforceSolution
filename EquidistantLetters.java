/**
 * EquidistantLetters
 */

import java.util.Scanner;
import java.util.Collection;

public class EquidistantLetters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            char[] ch = s.toCharArray();
            java.util.Arrays.sort(ch);
            System.out.println(ch);
        }
        sc.close();
    }
}