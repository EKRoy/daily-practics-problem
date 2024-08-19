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
    vi a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    bool f=false;
    vi c(n),d(n);
    rep(i,0,n-1) c[i]=a[i];
    rep(i,0,n-1) d[i]=b[i];
    sort(c.begin(),c.end());
    reverse(d.begin(),d.end());
    if(a==b || a==d){
       cout<<"Bob"<<nl;
    }
    else cout<<"Alice"<<nl;
   
   } 
    return 0;
}