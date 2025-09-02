#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
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
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   int n; cin>>n;
   char ch; cin>>ch;
   map<char,vector<char>>mp;
   for(int i=0;i<2*n;i++){
    string s; cin>>s;
    mp[s[1]].pb(s[0]);
   }
   vector<string>ans,ans2;
   for(auto it:mp){
    if(it.F!=ch){
        vector<char>v=it.S;
        int m=sz(v);
        vsort(v)
        if(m&1){
            char str=v[m-1];
            string s="";
            s+=str;
            s+=it.first;
            ans2.pb(s);
            for(int i=0;i<m-1;i++){
                char st=v[i];
               string S="";
               S+=st;
              S+=it.first;
              ans.pb(S);
            }
        }
        else{
            for(int i=0;i<m;i++){
                char st=v[i];
               string S="";
               S+=st;
              S+=it.first;
              ans.pb(S);
            }
        }
    }
   }
   if(sz(ans2)>mp[ch].size()){
    cout<<"IMPOSSIBLE\n";
   }
   else{
    for(int i=0;i<sz(ans);i+=2){
        cout<<ans[i]<<" "<<ans[i+1]<<nl;
    }
    vector<char>a=mp[ch];
    vsort(a)
    int idx=-1;
    for(int i=0;i<sz(ans2);i++){
        idx=i;
        cout<<ans2[i]<<" "<<a[i]<<ch<<nl;
    }
    for(int i=idx+1;i<sz(a);i+=2){
        cout<<a[i]<<ch<<" "<<a[i+1]<<ch<<nl;
    }
   }
 
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}