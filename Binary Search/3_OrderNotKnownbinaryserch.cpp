#include <bits/stdc++.h>
using namespace std;
void ascbs(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<key<<" Found";
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
        cout<<key<<" Not Found";
    }
}

void desbs(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<key<<" Found";
            break;
        }   
        else if(arr[mid]<key){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }

    if(low>high){
        cout<<key<<" Not Found";
    }
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    //int arr[]={9,8,7,6,5,4,3,2,1};
    int n=8, key=9;
    if(arr[0]<arr[1])
        ascbs(arr,n,key);
    else
        desbs(arr,n,key);    
    return 0;
}
