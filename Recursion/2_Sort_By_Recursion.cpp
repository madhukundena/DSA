#include<bits/stdc++.h>
using namespace std;

void ins_ele(vector<int> &v,int temp){
        if(v.size()==0||v[v.size()-1]<=temp){
            v.push_back(temp);
            return;
        }
        int val = v[v.size()-1];
        v.pop_back();
        ins_ele(v,temp);
        v.push_back(val);
    return;
}
void sort_ele(vector<int> &v)
{
    if(v.size()==0){
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    sort_ele(v);
    ins_ele(v,temp);
    return ;
}
int main(){
    vector<int> v={1,5,9,3,8,7,2,4};
    
    sort_ele(v);
   // cout<<v[0]<<" "<<v[1]<<v.size();
    for(int i=0;i<8;i++)
        cout<<v[i]<<" ";
    return 0;
}
