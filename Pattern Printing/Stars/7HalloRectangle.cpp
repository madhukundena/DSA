#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hallow Rectangle-1"<<endl;
    int n=10;
    for(int i=0;i<n;i++,cout<<endl){
        if(i==0||i==n-1)
            for(int j=0;j<n;j++)
                cout<<"* ";
        else{
            cout<<"* ";
            for(int k=0;k<n-2;k++,cout<<"  ");
            cout<<"*";
        } 
    }
    cout<<"Rectangle-2 X"<<endl;
    
    for(int i=0;i<n;i++,cout<<endl){
        if(i==0||i==n-1)
            for(int j=0;j<n;j++)
                cout<<"* ";
        else{
            cout<<"* ";
            for(int k=n-1;k>1;k--){
                if(i+k==n||)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            cout<<"*";
        } 
    }
    return 0;
}