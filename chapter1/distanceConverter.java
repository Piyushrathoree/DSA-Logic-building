import java.util.Scanner;
public class distanceConverter {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter kilometers");
        int kilometers=sc.nextInt();

        float miles=(float) kilometers * (float) 0.62137119;
        System.out.println(miles);
        sc.close();
    }
}
