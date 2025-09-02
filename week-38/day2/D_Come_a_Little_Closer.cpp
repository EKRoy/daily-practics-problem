#include<bits/stdc++.h>
using namespace std;
#define int            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
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
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   int n; cin>>n;
   vi row,col;
   for(int i=0;i<n;i++){
       int x,y; cin>>x>>y;
       row.pb(x);
       col.pb(y);
    }
    if(n==1){
     cout<<1<<nl;
     return;
    }
   rsort(row);
   rsort(col);
   int r=row[0];
   int c=col[0];
    r-=max(1ll*row[n-2]-row[n-1],1ll*row[0]-row[1]);
    c-=max(1ll*col[n-2]-col[n-1],1ll*col[0]-col[1]);
    int a=row[0]*c;
    int b=col[0]*r;
 
   if(r==1) b--;
   else if(c==1) a--;
    int ans=min(a,b);
    if(ans<n) ans=n;
    cout<<ans<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}