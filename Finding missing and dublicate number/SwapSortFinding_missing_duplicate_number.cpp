#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,3,2,6,1,2};
    int n=7;
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);       
        }
        else
            i++;             
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1)
            cout<<"Duplicate Value: "<<arr[i]<<" Missing Value: "<<i+1<<endl;
    }
    return 0;
}