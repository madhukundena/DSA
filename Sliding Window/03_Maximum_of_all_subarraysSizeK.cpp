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
        m=-999999;
        for(int j=i;j<i+k;j++){
            m=max(arr[j],m);
        }
      cout<<"max of sub array ="<<m<<endl;

    }
    list<int> l;
    vector<int> v;
    int i=0,j=0;
    while(j<n){
        if(l.size()>0&&l.front()<arr[j]){
            l.clear();
        }
        while(l.size()>0&&l.back()<arr[j])
       {
         l.pop_back();
       }
       l.push_back(arr[j]);
    //     //debug
    //    cout<<endl<<"Itr"<<endl;
    //    for(auto ele:l){
    //        cout<<ele<<" ";
    //    }

        if(j-i+1<k){
            j++;
        }
       else if(j-i+1==k){
       v.push_back(l.front());
       if(l.front()==arr[i]){
           l.pop_front();
       }
       i++;
       j++;
      } 
   }
cout<<"Maximum sub array ele:"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

    return 0;
}