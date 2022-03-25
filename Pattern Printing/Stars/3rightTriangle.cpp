#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Right triangle"<<endl;
    int n=3;
    for(int i=0;i<n;i++,cout<<endl){
        for(int k=i;k<n;k++,cout<<" ");
        for(int j=0;j<=i;j++)
            cout<<"*";
    }

    return 0;
}
