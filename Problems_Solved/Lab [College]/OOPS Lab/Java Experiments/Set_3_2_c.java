import java.util.Scanner;

public class Set_3_2_c {

    public static int[][] Transpose(int arr[][], int n) {
        int transpose[][] = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                transpose[i][j] = arr[j][i];
            }
        }
        return transpose;
    }

    public static void main(String[] args) {
        int n;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the N for N^N: ");
        n = s.nextInt();
        int arr[][] = new int[n][n];
        System.out.println("Enter the elements in the matrix  ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = s.nextInt();
            }
        }
        int[][] result = Transpose(arr, n);
        System.out.println("The result is ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}