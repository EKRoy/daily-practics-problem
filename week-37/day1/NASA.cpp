#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define en             "\n"
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
const int mxN=(1ll<<15);
vi allPalindome;
bool is_palindome(string str){
    int l=str.size();
   for(int i=0;i<str.size()/2;i++){
        if(str[i]!=str[l-i-1]) return false;
    }
    return true;
}
void palindome(){
    for(int i=0;i<=mxN;i++){
        string st=to_string(i);
        if(is_palindome(st)){
            allPalindome.pb(i);
        }
    }
}
void solve(){
   int n; cin>>n;
   vi a(n);
   vi mp(mxN+1);
   rep(i,0,n-1) {
    cin>>a[i];
    mp[a[i]]++;
   }
  ll cnt=n;
   for(int i=0;i<n;i++){
    for(int j=0;j<allPalindome.size();j++){
        int x=a[i]^allPalindome[j];
        cnt+=mp[x];
    }
   }
   cout<<cnt/2<<endl;
}
int32_t main()
{
   ft
   palindome();
 TC(t) solve();
   
    return 0;
}