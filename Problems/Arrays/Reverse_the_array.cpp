//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}