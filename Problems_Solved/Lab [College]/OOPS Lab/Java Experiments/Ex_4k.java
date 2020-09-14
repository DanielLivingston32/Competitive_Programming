import java.util.Scanner;

public class Ex_4k {
        public static void main(String[] args) {
                String a, b;
                Scanner s = new Scanner(System.in);
                System.out.println("1) charAt");
                System.out.println("Enter a string for demonstration:");
                a = s.nextLine();
                System.out.println(
                                "CharAt() returns the character present at the passed index of the string.. Enter an index to print the char present at that index:");
                int idx = s.nextInt();
                System.out.println((idx >= a.length() ? "The given index exceeds the string limit"
                                : "The char present at the given index is: " + a.charAt(idx)));
                System.out.println("2) append function");
                System.out.println(
                                "Enter the second string to append it to the first string[One of the function of append is to append a str to strbuilder]");
                s.nextLine();
                b = s.nextLine();
                StringBuilder input = new StringBuilder();
                input.append(b);
                System.out.println("Result of appending 1st string with 2nd one " + input.append(a));

                System.out.println("3) Insert");
                System.out.println("Enter the string in which you are going to insert: ");
                b = s.nextLine();
                StringBuffer inp = new StringBuffer();
                inp.append(b);
                System.out.println("Enter the position and the string to insert in the given string: ");
                idx = s.nextInt();
                a = s.nextLine();
                b = s.nextLine();
                inp.insert(idx, b);

                System.out.println("The resultant string is: " + inp);
        }
}