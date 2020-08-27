import java.util.Scanner;

public class Set_3_1_a {

    public static boolean FirstLast6(int arr[], int n) {
        if (arr[0] == 6 || arr[n - 1] == 6) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        int n;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the no of elements in array");
        n = s.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the element one after the other in a order: ");
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }

        System.out.println((FirstLast6(arr, n)) ? "True" : "False");
    }
}