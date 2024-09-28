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
    int n; cin>>n;
    vector<pii>a(n+1);
    rep(i,1,n){
        cin>>a[i].F;
        a[i].S=i;
    }
    vsort(a)
    ll pre[n+1];
    pre[1]=a[1].F;
    rep(i,2,n-1){
        pre[i]=pre[i-1]+a[i].F;
    }
    int mx=a[n].F;
    ll sd_mx=pre[n-1];
    // if(sd_mx<=mx){
    //     cout<<0<<endl;
    //     return;
    // }
    vi ans;
    rep(i,1,n-1){
        if((sd_mx-a[i].F)==mx){
            ans.pb(a[i].S);
        }
    }
    if((a[n-1].F)==pre[n-2]) ans.pb(a[n].S);
    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}