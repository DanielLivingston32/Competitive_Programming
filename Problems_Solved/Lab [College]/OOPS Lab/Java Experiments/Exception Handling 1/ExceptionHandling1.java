import java.util.*;

public class ExceptionHandling1 {
    public static void main(String[] args) {
        System.out.println("1) Arithmetic Exception Example:\n");
        try {
            int a = 15 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception caught.\n" + e.getMessage() + "\n");
        }

        System.out.println("2) NullPointerException Example:\n");
        try {
            String check = null;
            if (check.equals("B")) {
                System.out.println("Nothing");
            }
        } catch (NullPointerException e) {
            System.out.println("NullPointerException caught.\n\n");
        }

        System.out.println("3) NumberFormatException Example:\n");
        try {
            int a = Integer.parseInt(null);
        } catch (NumberFormatException e) {
            System.out.println("NumberFormatException caught.\n" + e.getCause() + "\n");
        }

        System.out.println("4) ArrayIndexOutOfBoundsException Example:\n");
        try {
            int a[] = new int[1];
            a[3] = 45;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException caught.\n" + e.getMessage() + "\n");
        }
    }
}
