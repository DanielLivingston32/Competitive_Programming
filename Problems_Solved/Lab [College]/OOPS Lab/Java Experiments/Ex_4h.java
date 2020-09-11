import java.util.Scanner;

public class Ex_4h {
    public static int word_count(String a) {
        int cnt = 0;
        char[] str_char = a.toCharArray();
        for (char x : str_char) {
            if (x == ' ' || x == '\n' || x == '\t') {
                cnt++;
            }
        }
        return cnt + 1;
    }

    public static void main(String[] args) {
        String a;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the string: ");
        a = s.nextLine();
        System.out.println(word_count(a));
    }
}