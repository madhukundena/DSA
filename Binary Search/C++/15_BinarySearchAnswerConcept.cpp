#include<bits/stdc++.h>
using namespace std;
float sqrtbs(int x,int pre) {
            if (x == 0) return 0;
            float start = 1, end = x, ans;
            while (start <= end) {
                int mid = (start + end) / 2;
                if(mid * mid == x)
                    return mid;
                else if ((mid*mid) < x ) {
                    start = mid + 1;
                    ans = mid;
                } 
                else {
                    end = mid - 1;
                }
            }
            float increment=0.1;
            for(int i=0;i<pre;i++){
                while (ans*ans<=x)
                {
                  ans+=increment;
                }
                ans = ans - increment;
                increment = increment/10;
            }

            return ans;
}
int main(){
    int n=24;
    int pre = 4;
    cout<<"square root of "<<n<<" : "<<sqrtbs(n,pre);
return 0;
}