#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key found: in pos:"<<mid+1<<" key= "<<key;
            break;
        }   
        else if(arr[mid]>key){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }

    if(low>high){
        cout<<"value not found";
    }
}



int minindbs(int arr[],int low,int high){
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
return pos;

}
int main(){
    int arr[]={5,6,7,8,1,2,3,4};
    int low=0,high=7,minind=0,key=7;
    minind=minindbs(arr,low,high);
    if(arr[high]>key){
            bs(arr,minind,high,key);
    } 
    else{
            bs(arr,low,minind-1,key);
    }



    return 0;
}
