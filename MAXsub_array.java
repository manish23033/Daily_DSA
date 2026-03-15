import java.util.Scanner;

public class MAXsub_array {

    public static int max_subarray(int k, int[] arr) {
        int maxSum = 0;
        int windowSum = 0;

        // calculate first window
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }

        maxSum = windowSum;

        // slide the window
        for (int i = k; i < arr.length; i++) {
            windowSum = windowSum + arr[i] - arr[i - k];
            maxSum = Math.max(maxSum, windowSum);
        }

        return maxSum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter window size k: ");
        int k = sc.nextInt();

        System.out.println("Enter array elements:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int result = max_subarray(k, arr);

        System.out.println("Maximum sum of subarray of size " + k + " = " + result);

        sc.close();
    }
}