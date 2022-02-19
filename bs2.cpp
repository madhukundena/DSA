#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key found at index:"<<mid;
            break;
        }
        else if(arr[mid]<key){
            low= mid+1;
        }
        else {
            high=mid-1;
        }
    }
    if(low>high)
        cout<<key<<" key not found";
}

int main(){
    int n;
    int high,low=0,key;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    high=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value "<<i+1<<" :" ;
        cin>>arr[i];
    } 
    cout<<"enter the key value:";
    cin>>key;
    bs(arr,low,high,key);
    return 0;
}