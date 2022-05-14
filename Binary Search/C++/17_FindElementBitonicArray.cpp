#include <bits/stdc++.h>
using namespace std;
int BitonicSearch(int arr[],int n,int key){
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
    low=0,high=maxind;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    low=maxind+1,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            low=mid+1;
        }
        else{
           high=mid-1;
        }
    }
 
return -1;
}

int main() {
    int arr[]={1,2,3,4,10,9,8,7,6};
    int n=9, key=6;
    cout<<"Index of "<<key<<" in the bitonic array: "<<BitonicSearch(arr,n,key);    
    return 0;
}
