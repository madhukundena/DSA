#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=1;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return nums[i];
        //     }
        // }
        // return n;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
          //cout<<nums[i]<<" "<<mp[nums[i]]<<endl;
        }
        for(int i=1;i<=mp.size();i++){
            
            if(mp[i]>1)
                return i;
            
         // cout<<mp[i]<<" ";
        }
       return 0; 
    }
};
int main(){
    vector<int> nums{1,3,4,2,2 };
    Solution  obj;
    cout<<"Duplicate ele is: "<< obj.findDuplicate(nums);
    return 0;
}