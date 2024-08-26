#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n);
    int total_sum=0,sum=0,ans=INT_MIN;
    rep(i,0,n-1){
        cin>>a[i];
        total_sum+=a[i];
    }
    rep(i,0,n-2){
        sum+=a[i];
        ans=max(ans,__gcd(sum,total_sum-sum));
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    solve();
   } 
    return 0;
}