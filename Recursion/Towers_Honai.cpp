#include<bits/stdc++.h>
using namespace std;
void toh(int n,char a,char b, char c){
    if(n==0){
        return;
    }
    toh(n-1,a,c,b);
    cout<<"moving "<<a<<" TO "<<c<<endl;
    toh(n-1,b,a,c);
}


int main(){
    int n=3;
    toh(3,'a','b','c');
    return 0;
}