#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={8,1,4,5,6,7,3};
    //priority_queue<int> p;
    //max heap
    priority_queue<int, vector<int>, greater<int> > p;
   //min heap
    int k=3;
    for(int i=0;i<v.size();i++){
        if(p.size()<k){
            p.push(v[i]);
        }
        else if(p.top()<v[i]){
                p.pop();
                p.push(v[i]);
        }
    }
    cout<<k<<" Sorted array";
    while(p.size()>0){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}
