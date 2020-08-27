import java.util.Scanner;

public class Set_3_1_c {

    public static int[] biggerTwo(int arr[], int arr2[]) {
        int arr_sum_1 = 0, arr_sum_2 = 0;
        for (int i = 0; i < 2; i++) {
            arr_sum_1 += arr[i];
        }
        for (int i = 0; i < 2; i++) {
            arr_sum_2 += arr2[i];
        }
        if (arr_sum_1 >= arr_sum_2) {
            return arr;
        }
        return arr2;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int arr[] = new int[2];
        int arr2[] = new int[2];
        System.out.println("Enter the elements of the two array one after the other in a order: ");
        for (int i = 0; i < 2; i++) {
            arr[i] = s.nextInt();
        }
        for (int i = 0; i < 2; i++) {
            arr2[i] = s.nextInt();
        }
        int[] result = biggerTwo(arr, arr2);
        System.out.println("The result is ");
        for (int i = 0; i < 2; i++) {
            System.out.print(result[i] + " ");
        }
    }
}