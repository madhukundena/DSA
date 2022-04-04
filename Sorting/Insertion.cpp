// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
// Algorithm 
// To sort an array of size n in ascending order: 
// 1: Iterate from arr[1] to arr[n] over the array. 
// 2: Compare the current element (key) to its predecessor. 
// 3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
// Time Complexity: O(n^2) 

#include<bits/stdc++.h>
using namespace std;
void insertionSort(int* arr,int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        // cout<<"Array after sorting: "<<endl;
        //     for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
    }
    cout<<"Array after sorting: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[]={8,7,6,5,4,3,2,1,0};
    int n=9;
    insertionSort(&arr[0],n);
    return 0;
}