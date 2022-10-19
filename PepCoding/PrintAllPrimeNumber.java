import java.util.Scanner;


class PrintAllPrimeNumber
{
    private static void isPrime(int num) {
        for(int i=2;i<=Math.sqrt(num);i++){
            if(num%i==0){
                return;
            }
        }
        if(num>1)
            System.out.println(num+" ");
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Starting number:");
        int start= sc.nextInt();
        System.out.println("Enter the Ending number:");
        int end= sc.nextInt();
        for(int i=start;i<end;i++){
            isPrime(i);
        }
        sc.close();
    }

 
}