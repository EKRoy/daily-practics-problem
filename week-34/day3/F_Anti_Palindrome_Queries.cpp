#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
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
   int n,q; cin>>n>>q;
   vi a(n+2);
    for(int i=1;i<=n;i++) cin>>a[i];
   map<int,int>mp;
   vector<vector<int>>v(n+2);
   v[0].pb(0);
   v[0].pb(0);
   v[0].pb(0);
   for(int i=1;i<=n;i++){
    mp[a[i]]++;
    v[i].pb(mp[1]);
    v[i].pb(mp[2]);
    v[i].pb(mp[3]);
   }
  
   while(q--){
    int l,r; cin>>l>>r;
    if((r-l+1)%2==1){
        cout<<"No\n";
    }
    else{
        int k=(r-l+1);
       int a=v[r][0];
       int b=v[r][1];
       int c=v[r][2];
       l--;
       int x=v[l][0]; 
       int y=v[l][1]; 
       int z=v[l][2]; 
       vi d;
       d.pb(a-x);
       d.pb(b-y);
       d.pb(c-z);
       vsort(d)
       if(d[2]!=k/2) cout<<"No\n";
       else cout<<"Yes"<<endl;
    }
   }
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}