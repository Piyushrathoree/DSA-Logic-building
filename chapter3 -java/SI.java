import java.util.Scanner;
class SI{
    public static float simpleInterest(float p, float r, float t){
        return (p * r * t) / 100;
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
            float principal, rate, time;
            System.out.println("Enter Principal Amount: ");
            principal = sc.nextFloat();
            System.out.println("Enter Rate of Interest: ");
            rate = sc.nextFloat();
            System.out.println("Enter Time in Years: ");
            time = sc.nextFloat();

            float si = simpleInterest(principal, rate, time);
            System.out.println("Simple Interest: " + si);
        sc.close();
    }
}