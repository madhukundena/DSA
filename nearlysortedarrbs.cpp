#include<bits/stdc++.h>
using namespace std;
void mbs(int arr[],int low,int high,int key){
    int mid=0,pos=0;
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
     int low=0,high=7,key=7;
      mbs(arr,low,high,key);

    return 0;
}