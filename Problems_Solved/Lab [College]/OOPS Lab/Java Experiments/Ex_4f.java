import java.util.Scanner;

public class Ex_4f {
    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter your name: ");
        a = s.nextLine();
        System.out.println("Enter the substring you want to extract: ");
        b = s.nextLine();
        System.out.println((a.indexOf(b) == -1 ? b + " is not present in your name"
                : "Extracted word: " + a.substring(a.indexOf(b), a.indexOf(b) + b.length())));

    }
}