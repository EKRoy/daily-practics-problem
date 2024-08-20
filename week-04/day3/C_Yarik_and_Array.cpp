#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int ans=INT_MIN,curr=0;
    rep(i,0,n-1){
        if(i>0 && (abs(a[i-1])%2 == abs(a[i])%2)){
            curr=a[i];
            ans=max(curr,ans);
        }
        else{
        curr=max(a[i],curr+a[i]);
        ans=max(ans,curr);

        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}