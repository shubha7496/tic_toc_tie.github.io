import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input an integer
        System.out.print("Enter an integer: ");
        int integerNumber = scanner.nextInt();

        // Input the position (k)
        System.out.print("Enter the position (k): ");
        int k = scanner.nextInt();

        // Call the function to find the kth digit
        int result = test(integerNumber, k);

        // Output the result
        System.out.println("Integer number for Kth digit: " + result);
    }

    // Function to find the kth digit from the beginning of an integer
    private static int test(int number, int k) {
        // Convert the number to a string to access individual digits
        String numStr = Integer.toString(number);

        // Check if k is within the range of the number of digits
        if (k >= 1 && k <= numStr.length()) {
            // Extract the kth digit from the left
            char kthDigitChar = numStr.charAt(k - 1);
            return Character.getNumericValue(kthDigitChar);
        } else {
            // If k is out of range, return -1
            return -1;
        }
    }
}