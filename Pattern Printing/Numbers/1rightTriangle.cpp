#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Right triangle"<<endl;
    int n=10;
    char ch='A';
    for(int i=0;i<n;i++,cout<<endl,ch='A'){
        for(int j=0;j<=i;j++)
            cout<<ch++;
    }

    return 0;
}
