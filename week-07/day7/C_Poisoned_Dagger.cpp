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
#define vi             vector<int>
const int MOD=1e9+7;
void solve(){
    ll n,h; cin>>n>>h;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    ll l=1,r=h;
    ll ans=h;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll z=0;
        for(int i=0;i<n;i++){
            if(i==n-1) z+=mid;
            else{
            ll x=a[i+1]-a[i];
            if(x>=mid) z+=mid;
            else z+=x;
            }
        }
        if(z>=h){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}