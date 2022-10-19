import java.util.Scanner;

class PrintingDigitsRecursion{
    static void Print(int num){
        if(num==0)
            return;
        int d=num%10;
        num/=10;
        Print(num);
        System.out.println(d+" ");
    }
    public static void main(String args[]){
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter a Number:");
        int n= sc.nextInt();
        Print(n);
        sc.close();
    }
}