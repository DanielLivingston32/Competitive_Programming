import java.util.Scanner;

public class Ex_4a {
    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the first string");
        a = s.nextLine();
        System.out.println("Enter the second string");
        b = s.nextLine();
        System.out.println(
                "1) Equals() method result: " + (a.equals(b) ? "The strings are equal" : "The strings are not equal"));
        System.out.println("2) EqualsIgnoreCase() method result: "
                + (a.equalsIgnoreCase(b) ? "The strings are equal" : "The strings are not equal"));
        System.out
                .println("3) == operator result: " + (a == b ? "The strings are equal" : "The strings are not equal"));
        System.out.println("4) compareTo method result: "
                + (a.compareTo(b) == 0 ? "The strings are equal" : "The strings are not equal"));
    }
}