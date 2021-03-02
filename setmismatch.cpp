#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
 
#define endl '\n'
#define loop(i,m,n) for(int i=m;i<n;i++)
#define loope(i,m,n) for(int i=m;i<=n;i++)
#define epool(i,m,n) for(int i=m;i>=n;i--)
#define mod 1000000007
#define mod2 998244353                                                                       
#define fi first
#define se second
#define pb push_back
#define ret(x) return cout << x,0;
#define all(v) v.begin(),v.end() 
#define SpeedForce               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
 
using namespace std;
 
int dx[]={-1,0,1,0,-1,1,1,-1};
int dy[]={0,1,0,-1,1,1,-1,-1};

// Place your code here

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        ll n=nums.size();

        ll sum = 0;
        for(int i=0; i<n; i++) sum+=(ll)nums[i];
        ll sumsq = 0;
        for(int i=0; i<n; i++) sumsq += (ll)nums[i]*(ll)nums[i];

        ll difsum = n*(n+1)/2-sum;
        ll difsumsq = n*(n+1)*(2*n+1)/6-sumsq;
        ll B = abs(difsumsq+difsum*difsum)/((ll)2*abs(difsum));
        ll A = abs(difsumsq-difsum*difsum)/((ll)2*abs(difsum));
        ans.push_back((int)A);
        ans.push_back((int)B);
        return ans;
    }
};

int32_t main(){
    SpeedForce
    Solution a;



}