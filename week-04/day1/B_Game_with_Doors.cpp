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
    int l,r; cin>>l>>r;
    int L,R; cin>>L>>R;
    int lw=max(l,L);
    int hi=min(r,R);
    int ans=0;
    if(lw>hi) ans=1;
    else{
        ans=hi-lw;
        if(min(l,L)<lw) ans++;
        if(max(r,R)>hi) ans++;
    }
    cout<<ans<<nl;
   } 
    return 0;
}