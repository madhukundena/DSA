#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high){
    int mid=low,pos=0,prev=0,next=0,n=high+1;
    while(low<=high)
    {
        mid=(low+high)/2;
        prev = (mid-1+n)%n;
        next = (mid+1)%n;

        cout<<arr[mid]<<"<"<<arr[prev]<<" &&  "<<arr[mid]<<"<"<<arr[next]<<endl;
        if(arr[mid]<arr[prev]&&arr[mid]<arr[next]){
            pos=mid;
            break;
        }
        else if(arr[mid]<arr[high])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"no of times array rotated"<<pos;


}
int main(){
    int arr[]={2,3,4,5,6,7,1};
    int low=0,high=7;
    bs(arr,low,high);   
    return 0;
}
