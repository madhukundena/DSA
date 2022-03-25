#include<bits/stdc++.h>
using namespace std;

void ins_ele(stack<int> &s,int temp){
        if(s.size()==0){
            s.push(temp);
            return;
        }
        int val = s.top();
        s.pop();
        ins_ele(s,temp);
        s.push(val);
    return;
}
void rev(stack<int> &s)
{
    if(s.size()==0){
        return;
    }
    int temp = s.top();
    s.pop();
    rev(s);
    ins_ele(s,temp);
    return ;
}
int main(){
     stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    cout<<"top before"<<s.top()<<endl;
    rev(s);
    cout<<"top after"<<s.top()<<endl;
   while(s.size()>0){
       cout<<s.top()<<" ";
       s.pop();
   }
    return 0;
}