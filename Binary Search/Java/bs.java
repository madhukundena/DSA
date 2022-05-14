import java.util.Arrays;


class bs{
    static void bsearch(int arr[],int key){
        int low=0,high=arr.length-1,mid=0;
        
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==key){
                System.out.println("Element found");
                return;
            }    
            else if(arr[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        System.out.println("Not Found");
    }
    public static void main(String args[]){
       int arr[] = {1,2,3,4,5,6,7,8,9};
       bsearch(arr,12);
       Arrays.sort(arr);
       System.out.println("Modified arr[] : %s"+
                           Arrays.toString(arr));
    }
}