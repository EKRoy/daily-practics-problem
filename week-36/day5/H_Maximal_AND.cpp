#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define en             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
   int n,k; cin>>n>>k;
   vi v(n);
   rep(i,0,n-1) cin>>v[i];
   map<int,int>mp;
   for(int i=0;i<n;i++){
    bitset<31>b(v[i]);
    for(int i=31;i>=0;i--){
        if(b[i]==0) mp[i]++;
    }
   }
   ll ans=0;
   for(int i=30;i>=0;i--){
    if(mp[i]==0) ans+=1ll<<i;
    else if(mp[i]<=k){
        ans+=1ll<<i;
        k-=mp[i];
    }
   }
   cout<<ans<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}