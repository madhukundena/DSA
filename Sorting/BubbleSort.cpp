// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
// Example: 
// First Pass: 
// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int* arr,int n){
    for(int i=1;i<n;i++){ 
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        // for(int i=0;i<n;i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;
    }
    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[]={8,7,6,5,4,3,2,1,0};
    int n=9;
    bubbleSort(&arr[0],n);
    return 0;
}