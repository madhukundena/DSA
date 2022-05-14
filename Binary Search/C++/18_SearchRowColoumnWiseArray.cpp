#include <bits/stdc++.h>
using namespace std;
void bs(int arr[4][4],int n,int key){

    for(int i=0;i<n;i++,cout<<endl)
        for(int j=0;j<n;j++)
            cout<<arr[i]<<" ";
}

int main() {
    int arr[4][4]={{10,20,30,40},
    {15,25,35,45},
    {27,23,37,48},
    {32,33,39,50},
    };
    
    int n=4,m=4,key=14;
    int i=0,j=m;
    while(i<n&&j>=0&&i>=0&&j>=0){
    if(arr[i][j]==key){
        cout<<arr[i][j]<<" Found";
        break;
    }
    else if(arr[i][j]>key){
        j--;
    }
    else{
        i++;
    }
    }
    if(i<0||j<0){
        cout<<key<<" Not Found";
    }
    //cout<<i<<"hello"<<j;
    return 0;
}
