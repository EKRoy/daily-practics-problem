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
void solve(){
    int n; cin>>n;
    string a,b; cin>>a>>b;
    int cnt=0;
    rep(i,1,n-2){
        if(a[i]=='.' && a[i-1]=='.' && a[i+1]=='.'  && b[i]=='.' && b[i-1]=='x' && b[i+1]=='x'){
            cnt++;
        } 
    }
    rep(i,1,n-2){
        if(b[i]=='.' && b[i-1]=='.' && b[i+1]=='.'  && a[i]=='.' && a[i-1]=='x' && a[i+1]=='x'){
            cnt++;
        } 
    }
   
    cout<<cnt<<nl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}