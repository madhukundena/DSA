#include <bits/stdc++.h>
using namespace std;
int bs(int arr[],int n){
    int low=0,high=1,mid,posans=-1;
    while(1>arr[high]&&high<100){ //given finite array;
        low=high;
        high=high*2;
        }
    //cout<<"low: "<<low<<"high: "<<high<<endl;
    while(low<=high){ //high<100 given finite array 
        mid=(low+high)/2;
        if(arr[mid]==1){
            posans=mid;
            high=mid-1;

        }
        else if(arr[mid]<1){
           low=mid+1;
        }
        else{
            high=mid-1;
        } 
    }
return posans;
}
int main() {
    int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1};
    int n=100;
    cout<<"Index of first 1 in binaray array: "<<bs(arr,n);    
    return 0;
}
