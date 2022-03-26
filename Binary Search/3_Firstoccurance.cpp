#include<bits/stdc++.h>
using namespace std;
int firstbs(int A[],int n, int key){
    int low=0,high=n-1,mid=0,posans=-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            posans=mid;
            high=mid-1;
        }
        else if(A[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return posans;
}
   
int main(){ 
    int n=10;
    int arr[]={1,2,3,4,5,10,10,10,15,20};
    int key=10;
    cout<<"The answer is"<<firstbs(arr,n,key);
   
    return 0;
}
