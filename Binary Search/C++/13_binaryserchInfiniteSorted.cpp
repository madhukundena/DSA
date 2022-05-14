#include <bits/stdc++.h>
using namespace std;
void bs(int arr[],int n,int key){
    int low=0,high=1,mid;
    while(key>arr[high]){
        low=high;
        high=high*2;
        }
    
    while(low<=high){ //high<100 given finite array 
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key Found";
            break;
        }
        else if(arr[mid]<key){
           low=mid+1;
        }
        else{
            high=mid-1;
        } 
    }

    if(low>high){
        cout<<"Not Found";
    }
}
int main() {
    int arr[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int n=100, key=98;
    bs(arr,n,key);    
    return 0;
}
