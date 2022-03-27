#include<bits/stdc++.h>
using namespace std;
int findCount(int A[],int n, int key){
    int low=0,high=n-1,mid,firstpos=-1,lastpos=-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            firstpos=mid;
            high=mid-1;
        }
        else if(A[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(firstpos==-1){
        return 0;
    }
    low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            lastpos=mid;
            low=mid+1;
        }
        else if(A[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //cout<<"first Pos: "<<firstpos<<" last pos:"<<lastpos;
    return lastpos-firstpos+1;
}
   
int main(){ 
    int n=10;
    int arr[]={1,2,3,4,5,10,10,10,15,20};
    int key=10;
    cout<<"count of "<<key<<" in array : "<<findCount(arr,n,key);
    return 0;
}
