#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[]={1,2,0,4,5,10,9,8,11,6};
    cout<<"before hello"<<endl;
    stack<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);

        }
        else if(s.top()>arr[i]){
            v.push_back(s.top());
        }
        else{
            while(s.size()>0&&s.top()<=arr[i]){
                s.pop();     
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
        //cout<<"stack top"<<s.top()<<endl;
    }

     //reverse(v.begin(), v.end());
 
    
    cout << "Reversed Vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
   

    return 0;
}