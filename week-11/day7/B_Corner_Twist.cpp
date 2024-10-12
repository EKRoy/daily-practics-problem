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
    int n,m; cin>>n>>m;
    int a[n][m],b[n][m];
    rep(i,0,n-1){
        rep(j,0,m-1){
            char ch;
            cin>>ch;
            a[i][j]=ch-'0';
        }
    }
    rep(i,0,n-1){
        rep(j,0,m-1){
           char ch;
           cin>>ch;
           b[i][j]=ch-'0';
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=m-1;j>=1;j--){
            if(a[i][j]!=b[i][j]){
            int dif=(b[i][j]-a[i][j]+3)%3;
            a[i][j]=b[i][j];
            a[i-1][j]=(a[i-1][j]+2*dif)%3;
            a[i][j-1]=(a[i][j-1]+2*dif)%3;
            a[i-1][j-1]=(a[i-1][j-1]+dif)%3;
            }
        }
    }
   
    bool ok=true;
    for(int i=0;i<m;i++){
        if(a[0][i]!=b[0][i]) ok=false;
    }
    for(int i=0;i<n;i++){
        if(a[i][0]!=b[i][0]) ok=false;
    }
    if(ok) py
    else pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}