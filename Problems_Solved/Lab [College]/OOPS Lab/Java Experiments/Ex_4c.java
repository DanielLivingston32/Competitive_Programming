import java.util.Scanner;

public class Ex_4c {
    public static void main(String[] args) {
        String str;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter your name please: ");
        str = s.nextLine();
        System.out.println(((str.endsWith("A") || str.endsWith("a") || str.endsWith("E") || str.endsWith("e")
                || str.endsWith("I") || str.endsWith("i") || str.endsWith("O") || str.endsWith("o") || str.endsWith("U")
                || str.endsWith("u")) ? "The last letter of your name is a vowel"
                        : "The last letter of your name is a consonant"));
    }
}