#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[]={1,2,0,4,5,10,9,8,11,6};
         
    stack<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(arr[i]>s.top()){
            v.push_back(s.top());
        }
        else{
            while (s.size()>0 && arr[i]<=s.top())
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);

    }

    //reverse(v.begin(),v.end());
 //   cout << "Reversed Vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
   

    return 0;
}