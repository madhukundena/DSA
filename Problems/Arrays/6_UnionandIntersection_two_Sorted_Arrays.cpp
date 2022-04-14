// for getting the count take variable

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,10};
    int n=5,m=4,count=0,i=0,j=0;
    int un[n+m],in[m+n],uc=0,inc=0;

    while(i<n&&j<m){
        if(a[i]==b[j]){
            count++; //union count
            un[uc++]=a[i];
            in[inc++]=a[i];
            i++;
            j++;

        }
        else{
            count+=2; //union count
            un[uc++]=a[i];
            un[uc++]=b[j];
            i++;
            j++;
        }  
    }
    if(i<n){
        count+=n-i;
        while(i<n){
            un[uc++]=a[i];
            i++;
        }
    }
    if(j<m){
        count+=n-j;
         while(j<m){
            un[uc++]=b[j];
            j++;
        }
    }
    cout<<"union: "<<count<<endl; //count

    for(int i=0;i<uc;i++)
    {
        cout<<un[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<inc;i++)
    {
        cout<<in[i]<<" ";
    }
    cout<<endl;

    return 0;
}