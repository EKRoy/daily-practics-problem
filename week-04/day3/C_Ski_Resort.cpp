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
    int n,k,q; cin>>n>>k>>q;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int len=0,ans=0;
    rep(i,0,n-1){
        if(a[i]<=q){
            len++;
        }
        else{
            if(len>=k){
                int x=len-k+1;
                ans+=x*(x+1)/2;
            }
            len=0;
        }
    }
    if(len>=k){
        int x=len-k+1;
        ans+=x*(x+1)/2;
    }
    cout<<ans<<nl;
   } 
    return 0;
}