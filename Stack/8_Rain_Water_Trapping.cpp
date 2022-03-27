#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[]={3,0,0,2,0,4};
    cout<<"NGR NGL Water"<<endl;
    stack<int> s1;
    vector<int> vgr;
    for(int i=n-1;i>=0;i--){
        if(s1.size()==0){
            vgr.push_back(arr[i]);
        }
        else if(s1.top()>arr[i]){
            vgr.push_back(s1.top());
        }
        else{
            while(s1.size()>0&&s1.top()<=arr[i]){
                s1.pop();
            }
            if(s1.size()==0){
                vgr.push_back(arr[i]);
            }
            else{
                 vgr.push_back(s1.top());
            }
        }
        if(s1.size()==0||s1.top()<arr[i])
            s1.push(arr[i]);
        //cout<<"stack top"<<s1.top()<<endl;
    }
    reverse(vgr.begin(), vgr.end());


    cout <<endl;
    for (int i = 0; i < vgr.size(); i++)
        cout << vgr[i] << " ";
   


    stack<int> s2;
    vector<int> vgl;
    for(int i=0;i<n;i++){
        if(s2.size()==0){
            vgl.push_back(arr[i]);
        }
        else if(s2.top()>arr[i]){
            vgl.push_back(s2.top());
        }
        else{
            while(s2.size()>0&&s2.top()<=arr[i]){
                s2.pop();
            }
            if(s2.size()==0){
                vgl.push_back(arr[i]);
            }
            else{
                 vgl.push_back(s2.top());
            }
        }
        if(s2.size()==0||s2.top()<arr[i])
            s2.push(arr[i]);
        //cout<<"stack top"<<s2.top()<<endl;
    }
    cout <<endl;
    for (int i = 0; i < vgl.size(); i++)
        cout << vgl[i] << " ";

   vector<int> water;
    cout<<endl;
    for(int i = 0; i < vgl.size(); i++){
        cout<<min(vgl[i],vgr[i])-arr[i]<<" ";
        water.push_back(min(vgl[i],vgr[i])-arr[i]);
    }
    int sum=0;
    for(int i=0;i<vgl.size();i++)
        sum+=water[i];    

    cout<<endl;
    cout<<"answer is: "<<sum;
    return 0;
}
