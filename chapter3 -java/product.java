import java.util.Scanner;

public class product {

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int product = num1 * num2;
        System.out.println("Product of the two numbers is: " + product);
    }
}