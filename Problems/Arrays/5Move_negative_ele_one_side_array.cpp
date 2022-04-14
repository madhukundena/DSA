#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,2,-3,-4,5,6,7,-8,-9};
    int n=9;
    //quick sort
    int j=0;
    for(int i=0;i<n;i++){
            if(arr[i]<0){
                if(i!=j)
                    swap(arr[i],arr[j]);
            j++;
            }
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //twopointers left right
    //code ..
    int a[]={-1,2,-3,-4,5,6,7,-8,-9};
    n=9;
    int left=0,right=n-1;
    while(left<right){
        if(a[left]<0){
            left++;
        }
        else if(a[right]>0){
            right--;
        }
        else if(a[left]>0&&a[right]<0){
            swap(a[left],a[right]);
            left++;
            right--;
        }
        else{
            right--;
            left++;
        }
    }




    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}

//Time complexity: O(N) 
