import java.util.Scanner;

public class Ex_4i {
    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a string to replace: ");
        a = s.nextLine();
        System.out.println("Enter a string to replace with C++: ");
        b = s.nextLine();
        System.out.println(a.replace("C++", b));
    }
}