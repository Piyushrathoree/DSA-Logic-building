public class greaterNum {

    public static void main(String[] args){
        int num1 = 10, num2 = 60, num3=30;
        if(num1 > num2){
           if(num1>num3){
             System.out.println("The greater number is: " + num1);
           }
        } else {
            if(num2>num3){
               System.out.println("The greater number is: " + num2);
            } else {
               System.out.println("The greater number is: " + num3);
            }
        }
    }
}