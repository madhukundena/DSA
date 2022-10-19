import java.util.Scanner;
public class FibonacciNumber {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the n value:");
        int n = sc.nextInt();
        int a=0;
        int b=1;
        int c;
        for(int i=0;i<n;i++){
            System.out.println(a+" ");
            c=a+b;
            a=b;
            b=c;          

        }
    }
    
}
