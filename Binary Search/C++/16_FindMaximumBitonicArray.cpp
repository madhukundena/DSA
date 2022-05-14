#include <bits/stdc++.h>
using namespace std;
int MaxInd(int arr[],int n){
    int low=0,high=n-1,maxind=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int prev=(mid-1+n)%n;
        int next=(mid+1)%n;
        if(arr[mid]>arr[prev]&&arr[mid]>arr[next]){
            maxind=mid;
            break;
        }
        else if(arr[low]<arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
	//cout<<"in function: "<<maxind;
    return maxind;
}


int main() {
    int arr[]={1,2,3,4,10,9,8,7,6};
    int n=9, key=8;
    cout<<"The maximum of the bitonic array: "<<MaxInd(arr,n);    
    return 0;
}
