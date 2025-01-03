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
    int n; cin>>n;
    int a[n][n];
    rep(i,0,n-1){
        rep(j,0,n-1){
            cin>>a[i][j];
        }
    }
    vi b;
    rep(i,0,n-1){
        ll k=1073741824-1;
        rep(j,0,n-1){
            if(i==j) continue;
            k&=a[i][j];
        }
        b.pb(k);
    }
    // for(int i:b) cout<<i<<" ";
    // cout<<endl;
    bool flag=true;
    rep(i,0,n-1){
        rep(j,0,n-1){
            if(i==j) continue;
            if((b[i]|b[j])!=a[i][j]){
                // cout<<b[i]<<" "<<b[j]<<" "<<" "<<a[i][j]<<endl;
                flag=false;
                break;
            }
            // cout<<a[i][j]<<" ";
        }
        // cout<<endl;
    }
    if(flag) {
        py
        for(int i:b) cout<<i<<" ";
        cout<<endl;
    }
    else pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}