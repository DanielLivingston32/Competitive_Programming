import java.util.Scanner;

public class Ex_4g {
    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter first string: ");
        a = s.nextLine();
        System.out.println("Enter second string: ");
        b = s.nextLine();
        System.out.println("1) Concatenate both the strings: " + a + b);

        System.out.println("\n2) Replace character in string: ");
        System.out.println("Enter the character to be replaced");
        char target = s.next().charAt(0);
        System.out.println("Enter the character to be replaced with:");
        char replacement = s.next().charAt(0);
        System.out.println("The first string after replacement is: " + a.replace(target, replacement));
        System.out.println("The second string after replacement is: " + b.replace(target, replacement));

        System.out.println("\n3) Convert the given string into lower case");
        System.out.println("The first string will become: " + a.toLowerCase());
        System.out.println("The second string will become: " + b.toLowerCase());

        System.out.println("\n4) Convert the given string into upper case");
        System.out.println("The first string will become: " + a.toUpperCase());
        System.out.println("The second string will become: " + b.toUpperCase());
    }
}