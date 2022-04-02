#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> ss;

void push(int a){
    s.push(a);
    if(ss.size()==0||ss.top()>a){
        ss.push(a);
    }
    return;
}
int pop(){
    if(ss.size()==0)
        return -1;
    int val;
    val=s.top();
    if(ss.top()==s.top())
    {

        ss.pop();
        s.pop();
    }
    else{
        s.pop();
    }
    return val;
}
int getmin(){
    if(ss.size()==0)
        return -1;
    return ss.top();
}

int main(){
    
    push(20);
    push(10);
    push(30);
    push(5);
    push(25);
    push(12);
    cout<<"Minimum Element: "<<getmin()<<endl;
    cout<<"popedElement: "<<pop()<<endl;   
    cout<<"Minimum Element: "<<getmin()<<endl;
    return 0;
}