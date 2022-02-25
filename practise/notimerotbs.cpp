#include<bits/stdc++.h>
using namespace std;
void nbs(int arr[],int low,int high, int key){
    int mid,prev,next,n=high+1;
    while(low<=high)
    {   

        mid=(low+high)/2;
        prev=(mid-1+n)%n;
        next=(mid+1)%n;
        if(arr[mid]<arr[prev]&&arr[mid]<arr[next]){
            //minind=mid;
            break;

        }
        else if(arr[high]>arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    cout<<mid<<" times rotated";

}
    


int main(){ 
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=n-1,key=10;
    
    nbs(arr,low,high,key);
   
    return 0;
}
