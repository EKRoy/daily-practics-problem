#include<bits/stdc++.h>
using namespace std;
#define int            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
int m=1;
void solve(){
    string s; cin>>s;
    int k=0;
    // int m=1;
    if(s[4]!='s') {
         s.insert(4,"s");
    }
     cout<<"Case "<<m<<": "<<s<<nl;
        m++;
}
int32_t main()
{
   TC(t)
   solve(); 
    return 0;
}