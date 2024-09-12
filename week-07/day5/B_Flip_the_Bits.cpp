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
#define vi             vector<int,int>
const int MOD=1e9+7;
void solve(){
    ll n; cin>>n;
    string a,b; cin>>a>>b;
    ll zero=0,one=0;
    vector<pair<ll,ll>>seg;
    int i=0;
    for(int j=0;j<n;j++){
        zero+=(a[j]=='0');
        one+=(a[j]=='1');
        if(zero==one){
            seg.pb({i,j});
            i=j+1;
        }
    }
    for(auto [x,y]:seg){
        ll l=x,r=y;
        if(a[l]==b[l]){
            continue;
        }
        else{
            for(ll i=l;i<=r;i++){
                if(a[i]=='0'){
                    a[i]='1';
                }
                else a[i]='0';
            }
        }
    }
    if(a==b) py
    else pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}