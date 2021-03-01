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

    int min(int a,int b){
        if(a<=b) return a;
        return b;
    }

    int distributeCandies(vector<int>& a) {
        int n = a.size();
        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }

        int ans = min(s.size(),n/2);
        return ans;
    }
};

int32_t main(){
    SpeedForce
    Solution a;

}