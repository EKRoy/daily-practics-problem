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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    ll n,k; cin>>n>>k;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    rsort(a)
    ll ans=0;
    ll val=k;
    for(ll i=1;i<n;i+=2){
        ll mn=min(val,a[i-1]-a[i]);
        a[i]+=mn;
        val-=mn;
    }
    ll A=0,B=0;
    for(int i=0;i<n;i++){
        if(i&1) B+=a[i];
        else A+=a[i];
    }
    cout<<A-B<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}