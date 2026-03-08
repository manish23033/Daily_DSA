import java.util.Scanner; // Import Scanner for user input

public class GCD {

    // Method to calculate Greatest Common Divisor (GCD) using subtraction method
    public static int GreatestCD(int n1, int n2) {
        // Continue looping until both numbers are equal
        while (n1 != n2) {
            if (n1 > n2) {
                n1 -= n2; // Subtract smaller from larger
            } else {
    
                n2 -= n1;
            }
        }
        return n1; // Return the GCD (now both n1 and n2 are equal)
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Create Scanner object for input

        // Prompt user and take two integers as input
        System.out.print("Enter first number: ");
        int n1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int n2 = sc.nextInt();

        // Call the GCD function and store result
        int gcd = GreatestCD(n1, n2);

        // Output the result
        System.out.println("GCD is: " + gcd);
    }
}
