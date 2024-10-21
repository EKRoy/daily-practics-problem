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
    vi a(n);
    set<int>st;
    rep(i,0,n-1) cin>>a[i],st.insert(a[i]);
    int m; cin>>m;
    for(int j=0;j<m;j++){
        string s; cin>>s;
        bool ok=true;
    map<ll,ll>mp;
    if(n!=s.size()){
        pn
        continue;
    }
        for(int i=0;i<s.size();i++){
            if(!mp.count(s[i])) mp[s[i]]=a[i];
            else{
                if(mp[s[i]]!=a[i]){
                    pn;
                    ok=false;
                    break;
                }
            }
    }
    if(!ok) continue;
    if(mp.size()==st.size()){
        py;
    }
    else pn; 
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}