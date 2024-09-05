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
    vi a(n),b(n);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    int l=1,r=n;
    bool ok=true;
    bool ok2=true;
    rep(i,0,n-1){
        if(a[i]!=b[i] && ok){
            l=i+1;
            ok=false;
        }
        else if(a[i]!=b[i]){
            ok2=true;
        }
        else if(a[i]==b[i] && ok2 && !ok){
            r=i;
            ok2=false;
        }
        if(i==n-1 && a[i]!=b[i]){
            r=i+1;
        }
    }
    vi v;
    for(int i=l-1;i<r;i++){
        v.pb(a[i]);
    }
    vsort(v)
    int mn=v[0],mx=v[v.size()-1];
    while(a[l-2]<=mn){
        mn=a[l-1];
        l--;
    }
    while(a[r]>=mx && r<n){
        mx=a[r];
        r++;
    }
    cout<<l<<" "<<r<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}