//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    if(n>0){
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min is: "<<min<<" Max is: "<<max;
    }
    return 0;
}