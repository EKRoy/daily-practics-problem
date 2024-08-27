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
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a.pb({x,y});
    }
    int s1,s2,d1,d2;
    cin>>s1>>s2>>d1>>d2;
    int r=((s1-d1)*(s1-d1))+((s2-d2)*(s2-d2));
    bool ok=true;
    for(auto it:a){
        int f=it.F,s=it.S;
        int d=((d1-f)*(d1-f))+((d2-f)*(d2-f));
        if(d<=r){
            ok=false;
            break;
        }
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