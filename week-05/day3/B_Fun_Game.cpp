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
    string s,t; cin>>s>>t;
    bool ok=true;
    rep(i,0,n-1){
        if(s[i]!=t[i]){
           if(s[i]=='0' && t[i]=='1'){
            ok=false;
           }
           break;
        }
        else{
            if(s[i]=='1') break;
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