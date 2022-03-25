#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Dimond"<<endl;
    int n=10;
    for(int i=0;i<n;i++,cout<<endl){
        for(int k=i;k<n-1;k++,cout<<" ");
        for(int j=0;j<=i;j++,cout<<"*");
        for(int j=0;j<i;j++,cout<<"*");
    }
    for(int i=n-2;i>=0;i--,cout<<endl){
        for(int k=i;k<n-1;k++,cout<<" ");
        for(int j=0;j<=i;j++,cout<<"*");
        for(int j=0;j<i;j++,cout<<"*");
    }
    return 0;
}
