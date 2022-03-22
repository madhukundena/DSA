#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printing(n-1);
    
}

int main(){
    int n=10;
    printing(n);
    return 0;
}