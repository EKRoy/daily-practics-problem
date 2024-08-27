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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,d; cin>>n>>d;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    vsort(a)
    vrev(a)
    int ans=0,cnt=0;
    rep(i,0,n-1){
        int val=(d/a[i])+1;
        cnt+=val;
        if(cnt<=n) ans++;
        else break;
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}