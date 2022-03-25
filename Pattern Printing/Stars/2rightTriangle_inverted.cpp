#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Inverted Right triangle"<<endl;
    int n=10;
    for(int i=0;i<n;i++,cout<<endl){
        for(int j=i;j<n;j++)
            cout<<"*";
    }

    return 0;
}
