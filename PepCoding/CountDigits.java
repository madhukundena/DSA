import java.util.Scanner;

class CountDigits{
    public static void main(String args[]){
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter a Number:");
        int n= sc.nextInt();
        int count=0;
        while(n>0){
            count++;
            n/=10;
        }

        System.out.println("Count is:"+count);
        sc.close();
    }
}