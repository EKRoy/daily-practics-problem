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
    ll n,k,x; cin>>n>>k>>x;
    vi a(n+1);
    rep(i,1,n) cin>>a[i];
    ll ans=1;
    vi v;
    sort(a.begin()+1,a.end());
    for(int i=2;i<=n;i++){
        ll d=a[i]-a[i-1];
        if(d>x){
            ans++;
            v.pb((d-1)/x);
        }
    }
    vsort(v)
    for(ll i:v){
        if(i<=k){
            ans--;
            k-=i;
        }
    }
    cout<<ans<<endl;
}
int main()
{
   ft
   solve(); 
    return 0;
}