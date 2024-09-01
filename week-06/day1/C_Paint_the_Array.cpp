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
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int l=0,r=0;
    bool ok1=true;
    bool ok2=true;
    for(int i=0;i<n;i+=2){
        l=__gcd(l,a[i]);
    }
    for(int i=1;i<n;i+=2){
        if(a[i]%l==0){
            ok1=false;
            break;
        }
    }
    for(int i=1;i<n;i+=2){
        r=__gcd(r,a[i]);
    }
    for(int i=0;i<n;i+=2){
        if(a[i]%r==0){
            ok2=false;
            break;
        }
    }
    if(!ok1 && !ok2){
        cout<<0<<endl;
    }
    else{
        if(ok1){
            cout<<l<<endl;
        }
        else if(ok2) cout<<r<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}