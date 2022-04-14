#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,1,0,2,1,0,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mp[3]={0};
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<3;i++){
        cout<<"count of "<<i<<" = "<<mp[i]<<endl; 
    }
    int c=0;
    for(int i=0;i<mp[0];i++){
        arr[c++]=0;
    }
    for(int i=0;i<mp[1];i++){
        arr[c++]=1;
    }
    for(int i=0;i<mp[2];i++){
        arr[c++]=2;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}