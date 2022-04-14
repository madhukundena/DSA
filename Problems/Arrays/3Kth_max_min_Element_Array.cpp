#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int k=1;
    sort(arr,arr+n);
    cout<<"kth min"<<arr[k-1]<<" kth max:"<<arr[n-k];
    return 0;
}