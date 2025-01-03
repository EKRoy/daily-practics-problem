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
    ll n,p,l,t; cin>>n>>p>>l>>t;
    ll c=(n+6)/7;
    ll s=1,r=n;
    ll ans=0;
    while(s<=r){
        ll mid=(s+r)/2;
        if(mid*l+min(1ll*c,1ll*2*mid)*t>=p){
            ans=mid;
            r=mid-1;
        }
        else s=mid+1;
    }
    cout<<n-ans<<endl;
    
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}