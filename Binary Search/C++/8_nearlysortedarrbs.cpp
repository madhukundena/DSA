#include<bits/stdc++.h>
using namespace std;
void mbs(int arr[],int n,int key){
    int mid=0,pos=0,low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            pos=mid;
            cout<<"found at"<<pos<<" key "<<key;
            break;
        }
        else if (arr[mid-1]==key) {
            pos=mid-1;
            cout<<"found at"<<pos<<" key "<<key;
            break;
        }
        else if(arr[mid+1]==key){
            pos=mid+1;
            cout<<"found at"<<pos<<" key "<<key;
            break;
        }
        else if(arr[mid]>key){
            high= mid-2;
        }
        else{
            low=mid+2;
        }

    }
    if(low>high)
        cout<<"not found";

}

int main(){
     int arr[]={1,3,2,4,6,5,7,8};
     int n=8,key=9;
      mbs(arr,n,key);

    return 0;
}
