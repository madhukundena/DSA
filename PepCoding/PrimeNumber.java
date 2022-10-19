import java.util.Scanner;


class PrimeNumber
{
    private static void isPrime(int num) {
        for(int i=2;i<=Math.sqrt(num);i++){
            if(num%i==0){
                System.out.println("Is a Not prime number");
                return;
            }
        }
        System.out.println("Is a prime number");
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of test cases:");
        int t= sc.nextInt();
        while(t>0){
            System.out.println("Enter the number:");
            int num =  sc.nextInt();
            isPrime(num);
            t--;
        }
        sc.close();
    }

 
}