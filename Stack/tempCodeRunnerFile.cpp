 stack<int> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);

        }
        else if(s.top()>arr[i]){
            v.push_back(s.top());
        }
        else{
            while(s.size()>0&&s.top()<arr[i]){
                s.pop();
                if(s.size()>0&&s.top()>arr[i]){
                    v.push_back(s.top());
                }
            }
            if(s.size()==0){
                v.push_back(-1);
            }
        }
        s.push(arr[i]);
        //cout<<"stack top"<<s.top()<<endl;
    }

     reverse(v.begin(), v.end());
 
    
    cout << "Reversed Vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
   