import java.util.Scanner;

public class Ex_4d {
    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the first string");
        a = s.nextLine();
        System.out.println("Enter the second string");
        b = s.nextLine();
        System.out.println((a.indexOf(b) == -1 ? "String 2 is not present in String 1"
                : "The first occurence of string 2 in string in is in " + a.indexOf(b)));

    }
}