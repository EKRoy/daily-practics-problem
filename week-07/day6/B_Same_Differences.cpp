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
    ll n; cin>>n;
    vi a(n+1);
    rep(i,1,n) cin>>a[i];
    map<ll,ll>freq;
    ll cnt=0;
    rep(i,1,n){
        freq[a[i]-i]++;
    }
    for(auto [x,y]:freq){
        cnt+=1ll*(y*(y-1)/2);
    }
    cout<<cnt<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}