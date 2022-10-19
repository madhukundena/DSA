import java.util.Scanner;
public class Pattern2 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        //int n= sc.nextInt();
        int n=5;
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
                System.out.print(" ");
           

            for(int j=0;j<=i;j++)
                System.out.print("*");
            
            System.out.println();

        }

        for(int i=n/2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
                System.out.print(" ");
           

            for(int j=0;j<=i;j++)
                System.out.print("*");
            
            System.out.println();

        }

        sc.close();
    }
}
