import java.util.*;
public class Pattern1 {
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n/2;i++)
        {
            for(int star=i;star<=n/2;star++)
                System.out.print("*");
            
            for(int space=0;space<=i*2;space++)
                System.out.print(" ");
            
                
            for(int star=i;star<=n/2;star++)
                System.out.print("*");
            
            System.out.println();

        }

        for(int i=n/2;i>=0;i--)
        {
            for(int star=i;star<=n/2;star++)
                System.out.print("*");
            
            for(int space=0;space<=i*2;space++)
                System.out.print(" ");
            
                
            for(int star=i;star<=n/2;star++)
                System.out.print("*");
            
            System.out.println();

        }


        sc.close();
    }
    
}
