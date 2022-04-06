#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,3,-5,6,7,4,8,20};
    int n=9;
    int k=3;//window size;
    //brute force;
    cout<<"brute force:"<<endl;
    
    for(int i=0;i<=n-k;i++){
        int neg=0;
        for(int j=i;j<i+k;j++){
           if(arr[j]<0){
               neg=arr[j];
           }
        
        }
        cout<<"negitive: "<<neg<<endl;
    }

    cout<<endl<<endl<<endl;
    int j=0;
    list<int> l;
    while(j<n){
        if(arr[j]<0){
            l.push_back(arr[j]);
        }
        if(j<k-1){
            j++;
        }
        else{
            cout<<"negitive: "<<l.front()<<endl;
            if(l.front()==arr[j-k+1]){
                l.pop_front();
            }
            j++;
        }
   }
    return 0;
}