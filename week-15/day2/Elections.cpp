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
    int n,x; cin>>n>>x;
    vi a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    vi c;
    rep(i,0,n-1){
        int val=a[i]-b[i];
        if(val<0){
            c.pb(-val);
        }
        else if(val==0){
            c.pb(0);
        }
        // c.pb(abs(a[i]-b[i]));
    }
    int ans=n-c.size();
    vsort(c);
    // for(int i:c) cout<<i<<" ";
    for(int i:c){
        if((i+1)<=x){
            ans++;
            x-=i+1;
        }
    }
    // cout<<ans<<endl;
    if(ans>(n/2)) py
    else pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}