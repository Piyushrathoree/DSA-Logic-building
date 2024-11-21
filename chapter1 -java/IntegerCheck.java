import java.util.Scanner;

public class IntegerCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter input: ");
        
        // Check if input is an integer
        if (scanner.hasNextInt()) {
            int number = scanner.nextInt();
            System.out.println("You entered an integer: " + number);
        } else {
            System.out.println("The input is not an integer.");
        }
        
        scanner.close();
    }
}