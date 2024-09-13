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
#define vi             vector<int>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int idx=-1;
    vector<pii>p;
    for(int i=1;i<n;i++){
        if(a[0]!=a[i]){
            idx=i;
            p.pb({idx+1,1});
        }
    }
    if(idx==-1){
        pn
        return;
    }
    for(int i=1;i<n;i++){
        if(a[0]==a[i]){
            p.pb({idx+1,i+1});
        }
    }
    py
    for(auto [x,y]:p){
        cout<<x<<" "<<y<<endl;
    }
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}