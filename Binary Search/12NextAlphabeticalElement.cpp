#include<bits/stdc++.h>
using namespace std;
char ceilbs(char A[],int n,char key){
    int low=0,high=n-1,mid=0,posans=1;
    char res;
    if(A[low]>key||A[high]<key){
        return -1;
    }
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            low= mid+1;
        }
        else if(A[mid]>key){
            posans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return A[posans];
}
   
int main(){ 
    int n=10;
    char arr[]={'a','b','c','d','e','f','g','h','i','j'};
    char key='a';
    cout<<"Ceil of the: "<<key<<" : "<<ceilbs(arr,n,key);
    return 0;
}
