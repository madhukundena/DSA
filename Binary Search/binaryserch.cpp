#include <bits/stdc++.h>
using namespace std;
void bs(int arr[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key found: in pos:"<<mid+1<<" key= "<<key;
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
        cout<<"value not found";
    }
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int low=0,high=8;
    int mid;
    int key=2;
    bs(arr,low,high,2);    
    return 0;
}
