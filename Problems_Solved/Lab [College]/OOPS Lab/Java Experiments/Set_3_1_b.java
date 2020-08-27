import java.util.Scanner;

public class Set_3_1_b {

    public static int[] middleWay(int arr[], int n) {
        int result[] = new int[2];
        result[0] = arr[n / 2 - 1];
        result[1] = arr[n / 2];
        return result;
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
        int[] result = middleWay(arr, n);
        for (int i = 0; i < 2; i++) {
            System.out.print(result[i] + " ");
        }
    }
}