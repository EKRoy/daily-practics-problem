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
    int n,x; cin>>n>>x;
    vi a(n);
    rep(i,0,n-1){
        cin>>a[i];
    }
    int ans=a[0];
    rep(i,0,n-2){
        int val=a[i+1]-a[i];
       ans=max(ans,val);
    }
    int val=x-a[n-1];
    ans=max(2*val,ans);
    cout<<ans;
    cout<<nl;
   } 
    return 0;
}