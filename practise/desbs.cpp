#include<bits/stdc++.h>
using namespace std;
void dbs(int arr[],int low,int high, int key){
    int mid;
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"key found";
            break;
        }   
        else if(arr[mid]<key){
            high=mid-1;
       }
         else{
             low=mid+1;
        }
    }
    if(low>high){
        cout<<"not found";
    }
}

int main(){ 
    int n=10;
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int low=0,high=n-1,key=9;
    dbs(arr,low,high,key);
    return 0;
}
