import java.util.Scanner;

class PrintingDigits{
    public static void main(String args[]){
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter a Number:");
        int n= sc.nextInt();
        int count=0;
        int arr[] = new int[10];
        int i=0;
        while(n>0){
            int d=n%10;
            arr[i]=d;
            i++;
            n/=10;
        }
        for(int j=i-1;j>=0;j--){
            System.out.println(arr[j]+" ");
        }

        System.out.println("Count is:"+count);
        sc.close();
    }
}