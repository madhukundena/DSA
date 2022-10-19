import java.util.Scanner;
public class PrimeFactorization {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int fact=2;
        while(n>1){
            if(n%fact==0)
            {
                n/=fact;
                System.out.print(fact+" ");
            }
            else{
                fact++;
            }    

        }        
        sc.close();
    }
}
