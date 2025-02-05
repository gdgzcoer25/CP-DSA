import java.util.Scanner;

public class ReduceToOneDigit {

    // Function to reduce the number to a single digit
    public static int reduceToOneDigit(int num) {
        while (num >= 10) {  // Continue until it's a single digit
            int sum = 0;
            while (num > 0) {
                sum += num % 10;  // Extract the last digit and add to sum
                num /= 10;        // Remove the last digit
            }
            num = sum;
        }
        return num;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int result = reduceToOneDigit(number);
        System.out.println("Single digit sum: " + result);
    }
}
