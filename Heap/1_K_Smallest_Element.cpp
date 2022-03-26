#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={8,1,4,5,6,7,3};
    priority_queue<int> p;
    //max heap
    int k=2;
    for(int i=0;i<v.size();i++){
        if(p.size()<k){
            p.push(v[i]);
        }
        else if(p.top()>v[i]){
                p.pop();
                p.push(v[i]);
        }
    }
    cout<<k<<"- smallest element is: "<<p.top();
    return 0;
}
