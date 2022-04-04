// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
// Example: 
// First Pass: 
// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

//recursion
// 1)Base Case: If array size is 1, return.
// 2)Do One Pass of normal Bubble Sort. This pass fixes last element of current subarray.
// 3)Recur for all elements except last of current subarray.


#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int* arr,int n){
    cout<<"n value:"<<n<<endl;
    if(n==0){
        
        return;
    }
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        bubbleSort(&arr[0],n-1);
    }

int main(){
    int arr[]={8,7,6,5,4,3,2,1,0};
    int n=9;
    bubbleSort(&arr[0],n);
    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}