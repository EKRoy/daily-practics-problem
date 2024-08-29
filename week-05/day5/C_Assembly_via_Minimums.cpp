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
    int n; cin>>n;
    int m=n*(n-1)/2;
    vi a(m);
    rep(i,0,m-1) cin>>a[i];
    rsort(a);
    vi b;
    b.pb(a[0]);
    b.pb(a[0]);
    int cnt=0;
    rep(i,1,m-1){
       cnt++;
       if(cnt==b.size()){
        b.pb(a[i]);
        cnt=0;
       } 
    }
    for(int i:b) cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}