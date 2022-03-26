#include<bits/stdc++.h>
using namespace std;

void ins_ele(stack<int> &s,int temp){
        if(s.size()==0||s.top()<=temp){
            s.push(temp);
            return;
        }
        int val = s.top();
        s.pop();
        ins_ele(s,temp);
        s.push(val);
    return;
}
void sort_ele(stack<int> &s)
{
    if(s.size()==1){
        return;
    }
    int temp = s.top();
    s.pop();
    sort_ele(s);
    ins_ele(s,temp);
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
    sort_ele(s);
   
   while(s.size()>0){
       cout<<s.top()<<" ";
       s.pop();
   }
   
    return 0;
}
