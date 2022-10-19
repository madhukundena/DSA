public class PrintingZ {
    public static void main(String args[]){
        System.out.println("hello");
        int n=5;
        for(int i=0;i<n;i++){
            if(i==0||i==n-1){
                for(int k=0;k<n;k++)
                    System.out.print("*");
            }
            else{
                for(int j=0;j<n;j++){
                    if(i+j==n-1)
                        System.out.print("*");
                    else 
                        System.out.print(" ");
                    }
            }
            System.out.println();
        }
    }
}
