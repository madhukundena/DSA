#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[]={100,80,60,70,60,75,85};
   
    stack<pair<int,int>> s; //ngl, ind
    vector<int> v;

    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);

        }
        else if(s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else{
            while(s.size()>0&&s.top().first<=arr[i]){
                s.pop();    
            }
             if(s.size()>0){
                    v.push_back(s.top().second);
                }
            else{
                v.push_back(-1);
            }
        }
        s.push({arr[i],i});
        //cout<<"stack top"<<s.top()<<endl;
    }

    
 
    
    cout << "Consecutive smaller element to left: ";
    for (int i = 0; i < v.size(); i++)
        cout <<i- v[i]<< " ";
   

    return 0;
}

//output:
// Consecutive smaller element to left: 1 1 1 2 1 4 6
