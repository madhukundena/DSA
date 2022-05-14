#include<bits/stdc++.h>
using namespace std;
int sqrtbs(int x) {
            if (x == 0) return 0;
            int start = 1, end = x, ans;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (mid <= x / mid) {
                    start = mid + 1;
                    ans = mid;
                } else {
                    end = mid - 1;
                }
            }
            return ans;
}
int main(){
    int n=24;
    cout<<"square root of "<<n<<" : "<<sqrt(n);
return 0;
}