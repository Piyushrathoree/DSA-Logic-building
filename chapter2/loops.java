public class loops {
    // 1st question -- 4star pattern
    public static void main(String[] args){
    for(int i=1;i<=4;i++){
    for(int j=1;j<=i; j++){
    System.out.print("*");
    }
    System.out.println();
    }
    }

    // 2nd question -- reverse 4star pattern 
    public static void main(String[] args) {
        for (int i = 4; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    
   // 4th question -- character half-pyramid in continuation
    public static void main(String[] args) {
        char ch='A';
        int n=4;
        for(int i=1 ;i<=n;i++){
            for (int j=1;j<=i;j++){
             System.out.print(ch);
             ch++;
            }
            System.out.println();
        }
    }

    //// 5th question -- 
}
