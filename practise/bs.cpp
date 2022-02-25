#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high, int key){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Key found "<<key;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high)
    {
        cout<<"Key not found";
    }
}

int rbs(int arr[],int low,int high,int key){
    int mid=(low+high)/2;
    if(low<=high)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
           return rbs(arr,mid+1,high,key);
        }
        else{
            return rbs(arr,low,mid-1,key);
        }
    }
    return -1;
}
    


int main(){ 
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=n-1,key=10;
   // bs(arr,low,high,key);
    if(rbs(arr,low,high,key)==-1){
        cout<<"not found12312";
    }
    else{
        cout<<"found12312";
    }
    dbs(arr,low,high,key);
    return 0;
}
