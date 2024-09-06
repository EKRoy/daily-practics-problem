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
    int n,k; cin>>n>>k;
    vector<vector<int>>a(n+1,vector<int>(n+1));
    rep(i,1,n){
        rep(j,1,n){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]!=a[n-i+1][n-j+1]) ans++;
        }
    }
    ans/=2;
    if(ans>k) pn
    else{
        k-=ans;
        if(n&1) py
        else if(k&1) pn
        else py
    }
}
int32_t main()
{
    ft
    TC(t)
    solve();
    return 0;
}