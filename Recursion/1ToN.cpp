#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    printing(n-1);
    cout<<n<<" ";
}

int main(){
    int n=10;
    printing(n);
    return 0;
}