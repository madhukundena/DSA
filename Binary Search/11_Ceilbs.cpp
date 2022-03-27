#include<bits/stdc++.h>
using namespace std;
int ceilbs(int A[],int n, int key){
    int low=0,high=n-1,mid=0,posans=1;
    if(A[low]>key){
        return -1;
    }
    if(A[high]<key){
        return A[high];
    }
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            return A[mid];
        }
        else if(A[mid]>key){
            posans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return A[posans];
}
   
int main(){ 
    int n=10;
    int arr[]={1,2,3,4,5,6,10,13,15,20};
    int key=14;
    cout<<"The answer is"<<ceilbs(arr,n,key);
   
    return 0;
}
