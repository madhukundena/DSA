#include<bits/stdc++.h>
using namespace std;

void del(stack<int> &s,int k){
        if(k==0){
           s.pop();
            return;
        }
        int val = s.top();
        s.pop();
        del(s,k-1);
        s.push(val);
    return;
}
void del_middle(stack<int> &s)
{
    if(s.size()==1){
        return;
    }
    int k = s.size()/2;
    del(s,k);
    return ;
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(9);
    s.push(3);
    s.push(8);
    s.push(7);
    s.push(2);
    s.push(4);
    del_middle(s);
   
   while(s.size()>0){
       cout<<s.top()<<" ";
       s.pop();
   }
   
    return 0;
}