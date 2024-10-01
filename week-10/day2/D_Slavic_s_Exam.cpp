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
    string s,t; cin>>s>>t;
    int n=s.size(),m=t.size();
    int k=0;
    rep(i,0,n-1){
        if(s[i]=='?' && k<m){
            s[i]=t[k];
            k++;
        }
        else if(s[i]==t[k] && k<m){
            k++;
        }
        else if(k>=m){
            if(s[i]=='?') s[i]='a';
        }
    }
    // cout<<k<<endl;
    if(k==m){
        py
        cout<<s<<endl;
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