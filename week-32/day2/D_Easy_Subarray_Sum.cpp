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
   rep(i,0,n-1) cin>>a[i];
   int i=0,j=n-1;
   bool f1=false,f2=false;
   while(i<j){
    if(a[i]<0 || a[i]==0){
        i++;
    }
    else f1=true;
    if(a[j]<0 || a[j]==0) j--;
    else f2=true;
    if(f1 && f2) break;
   }
//    cout<<i<<j<<endl;
   int cnt=0;
   for(int k=i+1;k<j;k++){
    // cout<<k<<endl;
    if(a[k]<0) cnt++;
   }
   cout<<cnt<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}