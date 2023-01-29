#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}

int main(){
    cout<<"hello world";
    int a,b,c;
    cout<<"enter the and b"<<endl;
    cin>>a>>b;
    cout<<"1.add\n2.sub\n3.mul\n4.div\n enter your choice:"<<endl;
    int n;
    cin>>n;
    switch (n)
    {
        
    case 1:
        cout<<add(a,b);
        break;
    case 2:
        cout<<sub(a,b);
        break;
    case 3:
        cout<<mul(a,b);
        break;
    case 4:
       cout<<division(a,b);
        break;
    
    default:
        break;
    }
}