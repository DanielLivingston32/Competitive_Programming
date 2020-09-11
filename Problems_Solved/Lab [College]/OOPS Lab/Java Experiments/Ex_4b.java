import java.util.Scanner;

public class Ex_4b {
    public static void main(String[] args) {
        String str;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter your name please: ");
        str = s.nextLine();
        System.out.println(((str.startsWith("A") || str.startsWith("a") || str.startsWith("E") || str.startsWith("e")
                || str.startsWith("I") || str.startsWith("i") || str.startsWith("O") || str.startsWith("o")
                || str.startsWith("U") || str.startsWith("u")) ? "The first letter of your name is a vowel"
                        : "The first letter of your name is a consonant"));
    }
}