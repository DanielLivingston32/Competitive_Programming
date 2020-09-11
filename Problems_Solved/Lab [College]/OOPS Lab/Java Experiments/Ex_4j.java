import java.util.Scanner;

public class Ex_4j {

    public static boolean isPalindrome(String a) {
        char[] a_arr = a.toCharArray();
        for (int i = 0; i < a.length() / 2; i++) {
            if (a_arr[i] != a_arr[a.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        String a, b;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the string to check if it is a Palindrome: ");
        a = s.nextLine();
        StringBuilder input = new StringBuilder();
        input.append(a);
        System.out.println("1) With predefined function: "
                + (a.equalsIgnoreCase((input.reverse()).toString()) ? "String is Palindrome"
                        : "String is not Palindrome"));
        System.out.println("2) Without predefined function: "
                + (isPalindrome(a.toLowerCase()) ? "String is Palindrome" : "String is not Palindrome"));
    }
}