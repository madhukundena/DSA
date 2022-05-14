#include <bits/stdc++.h>
using namespace std;
void bs(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key Found";
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
        cout<<"Not Found";
    }
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=8, key=8;
    bs(arr,n,key);    
    return 0;
}
