#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int minele=0;

void push(int a){
    if(s.size()==0){
        s.push(a);
        minele=a;
    }
   else if(minele<=a){
       s.push(a);

    }
    else{
        s.push(2*a-minele);
        minele=a;
    }
}
void pop(){
    if(s.top()>=minele){
        s.pop();
    }
    else{
        minele=minele*2-s.top();
        s.pop();
    }
}
int getmin(){
    if(s.size()==0)
        return -1;

    return minele;
}

int top(){
    if(s.size()==0)
        return -1;
    else if(minele<=s.top())
        return s.top();
    else
        return minele;
}
int main(){
    
    push(20);
    push(10);
    push(30);
    push(5);
    push(25);
    push(12);
    cout<<"Minimum Element: "<<getmin()<<endl;
    pop();   
    cout<<"Minimum Element: "<<getmin()<<endl;
    return 0;
}