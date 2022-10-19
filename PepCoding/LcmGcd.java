import java.util.Scanner;
public class LcmGcd {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n1= sc.nextInt();
        int n2= sc.nextInt();
        int s1=n1,s2=n2;
        while(n1%n2!=0){
            int rem=n1%n2;
            n1=rem;
            n2=n1;
        }
        int gcd=n1;
        int lcm= (s1*s2)/gcd;
        System.out.println("Lcm is:"+lcm);
        System.out.println("Gcd is:"+gcd);
        sc.close();
    }
}
