//using map finding count of each number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,1,6};
    int n=6;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //cout<<"Answers is:";
    for(int i=1;i<=n;i++){
       // cout<<i<<" count="<<mp[i]<<endl;

        if(mp[i]>1){
            cout<<"duplicate Number: "<<i<<endl;
        }
        else if(mp[i]==0){
            cout<<"Missing: "<<i<<endl;
        }
    }
    return 0;
}