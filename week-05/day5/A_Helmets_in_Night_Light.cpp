#include<bits/stdc++.h>
using namespace std;
#define int            long long
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
    int n,p; cin>>n>>p;
    vi a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    vector<pair<int,int>>pir;
    for(int i=0;i<n;i++){
        pir.pb({min(p,b[i]),a[i]});
    }
    vsort(pir)
    int cost=p;
    int person=n-1;
    for(int i=0;i<n;i++){
        cost+=min(person,pir[i].S)*pir[i].F;
        person-=min(person,pir[i].S);
    }
    cout<<cost<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}