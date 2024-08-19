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
    int n,k; cin>>n>>k;
    vi a(n); 
    rep(i,0,n-1) cin>>a[i];
    vi b;
    vector<pair<int,int>>c;
    rep(i,0,n-1){
        if(a[i]%k==0){
            b.pb(i+1);
        }
        else{
            c.pb({a[i]%k,i+1});
        }
    }
    sort(c.begin(),c.end(),[&](pair<int,int>x,pair<int,int>y)
    {
        if(x.first==y.first) return x.second<y.second;
        else return x.first>y.first;
    });
    for(int i:b) cout<<i<<" ";
    for(auto i:c) cout<<i.second<<" ";
    cout<<nl;
   } 
    return 0;
}