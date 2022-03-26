#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Right triangle"<<endl;
    int n=10;
    
    for(int i=0;i<n;i++,cout<<endl){
        for(int k=i;k<n-1;k++,cout<<" ");
        for(int j=0;j<=i;j++)
            cout<<j+1;
        for(int j=i-1;j>=0;j--)
            cout<<j+1;
    
    
    }

    return 0;
}
