#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,7,4,3,20};
    int n=9;
    int k=3;//window size;
    int m=-999999;
    //brute force;
    cout<<"brute force:"<<endl;
    
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
      //  cout<<"sum ="<<sum<<endl;
        m=max(sum,m);
    }
    cout<<m<<" is maximum sub array sum"<<endl;

    int sum=0;
    int j=0;
    m=-9999;
    
    while(j<n){
        sum+=arr[j];
        if(j<k-1){
            j++;
        }
        else{
            m=max(sum,m);
            sum-=arr[j-k+1];
            j++;
        }
   }
cout<<m<<" is maximum sub array sum"<<endl;

    return 0;
}