#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[]={6,2,5,4,5,1,6};
   
    stack<pair<int,int>> s1; //nsl, ind
    vector<int> lv;
    //NSL
    for(int i=0;i<n;i++){
        if(s1.size()==0){
            lv.push_back(-1);

        }
        else if(s1.top().first<arr[i]){
            lv.push_back(s1.top().second);
        }
        else{
            while(s1.size()>0&&s1.top().first>=arr[i]){
                s1.pop();
               
            }
             if(s1.size()>0){
                    lv.push_back(s1.top().second);
                }
            else{
                lv.push_back(-1);
            }
        }
        s1.push({arr[i],i});
        //cout<<"stack top"<<s.top()<<endl;
    }


    
    //NSR
    stack<pair<int,int>> s2;
    vector<int> rv;
    for(int i=n-1;i>=0;i--){
        if(s2.size()==0){
            rv.push_back(n);

        }
        else if(s2.top().first<arr[i]){
            rv.push_back(s2.top().second);
        }
        else{
            while(s2.size()>0&&s2.top().first>=arr[i]){
                s2.pop();
               
            }
             if(s2.size()>0){
                   rv.push_back(s2.top().second);
                }
            else{
                rv.push_back(n);
            }
        }
        s2.push({arr[i],i});
        //cout<<"stack top"<<s.top()<<endl;
    }
    reverse(rv.begin(),rv.end());


    int width[n];
    cout<<"width array";
    for (int i = 0; i < rv.size(); i++){
        width[i]=(rv[i]-lv[i])-1;
        cout<<width[i]<<" ";
    }
    cout<<endl;
    vector<int> area;
    cout<<endl<<"Area vector is:";
    for (int i = 0; i < n; i++){
        area.push_back(width[i]*arr[i]);
        cout<<area[i]<<" ";
    }
    cout<<"MAH: "<<*max_element(area.begin(),area.end());
    
    return 0;
}

//output:
//width array1 5 1 3 1 7 1 

//Area vector is:6 10 5 12 5 7 6 MAH: 12
