import java.util.*;

public class RotateNumber {
    public static void main(String args[]){
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter a number:");
        int n= sc.nextInt();
        System.out.println("Enter the nor:");
        int nor =  sc.nextInt();
        int safe=n;
        int p=1;
        while(n>0){
            p*=10;
            n/=10;
        }
        p/=10;
        n=safe;
        while(nor>0){
            int d = n%10;
            n/=10;
            d=d*p;
            n+=d;
            nor--;
        }
        System.out.println("answer is:"+n);
        sc.close();

    }
    
}
