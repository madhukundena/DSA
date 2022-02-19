#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key found: "<<key;
            break;
        }
        else if(arr[mid]<key){
            low= mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(low>high)
        cout<<key<<" key not found";

}

int main(){
    int arr[]={0,1,3,5,9,11,14,16,18,20};
    int n=10;
    int low=0,high=n-1,key=18;
    bs(arr,low,high,key);






}