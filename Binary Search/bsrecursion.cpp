#include<bits/stdc++.h>
using namespace std;
int rbs(int arr[],int low,int high,int key){
    int mid=(low+high)/2;
    int ans=0;
    if(low<=high){
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]<key){
      return rbs(arr,mid+1,high,key);

    }
    else{
      return rbs(arr,low,mid,key);
    }
    }
    return -1;
}
int main(){
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=n-1,key=7;
    int ans=rbs(arr,low,high,key);
    if(ans==0)
    {
        cout<<"not found";
    }
    else {
        cout<<"found";
    }


    return 0;
}
