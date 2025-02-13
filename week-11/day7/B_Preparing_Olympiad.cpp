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
#define vi             vector<ll>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
    ll n,l,r,x; cin>>n>>l>>r>>x;
    vi a(n);
    rep(i,0,n-1){
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0;i<(1<<n);i++){
        ll mn=INT_MAX;
        ll mx=INT_MIN;
        ll sum=0,cnt=0;
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                cnt++;
                sum+=a[j];
                mn=min(mn,a[j]);
                mx=max(mx,a[j]);
            }
        }
        if(mx-mn>=x && sum>=l && sum<=r && cnt>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}