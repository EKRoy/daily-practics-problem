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
   string s,t; cin>>s>>t;
   bool flag=false;
   string ans;
   for(int i=0;i<n;i++){
    if(!flag){
        ans+=s[i];
        if(s[i+1]>t[i]){
            ans+=t[i];
            flag=true;
        }
    }
    else{
        ans+=t[i];
    }
   }
   if(!flag){
    ans+=t[n-1];
   }
   int cnt=1;
   for(int i=0;i<n-1;i++)
   {
     if(s[i+1]==t[i]) cnt++;
     else if(s[i+1]=='0' && t[i]=='1') cnt=1;
     else if(s[i+1]=='1' && t[i]=='0') 
     {
        break;
     }
   } 
   cout<<ans<<endl;
   cout<<cnt<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}