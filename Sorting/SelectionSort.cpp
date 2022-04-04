// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
// 1) The subarray which is already sorted. 
// 2) Remaining subarray which is unsorted.
// In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int* arr,int n){
    for(int i=0;i<n-1;i++){ 
        int minind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minind])
                minind=j;
        }
        int temp=arr[i];
        arr[i]=arr[minind];
        arr[minind]=temp;
    }
    
    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,7,6,5,4,3,2,1,0};
    int n=9;
    selectionSort(&arr[0],n);
    return 0;
}