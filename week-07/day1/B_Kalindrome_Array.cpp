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
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int x=-1,y=-1;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            x=a[i];
            y=a[n-i-1];
            break;
        }
    }
    if(x==-1) {
        py
        return;
    }
    vi b,d;
    for(int i:a){
        if(i!=x){
            b.pb(i);
        }
    }
    int m=b.size();
    for(int i=0;i<m;i++){
        if(b[i]!=b[m-i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i:a){
        if(i!=y){
            d.pb(i);
        }
    }
    int k=d.size();
    for(int i=0;i<k;i++){
        if(b[i]!=b[k-i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    py
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}