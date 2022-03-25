#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Right triangle"<<endl;
    int n=10;
    for(int i=0;i<n;i++,cout<<endl){
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i||i==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
    }

    return 0;
}
