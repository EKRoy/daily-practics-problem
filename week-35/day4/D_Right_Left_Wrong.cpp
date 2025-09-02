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
#define vi             vector<ll>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
   int n; cin>>n;
   vi a(n);
   rep(i,0,n-1) cin>>a[i];
   string s; cin>>s;
   vi pre(n+1);
   pre[0]=0;
   for(int i=1;i<=n;i++){
    pre[i]=pre[i-1]+a[i-1];
   }
   int l=0,r=n-1;
   ll sum=0;
   while(l<r){
    if(s[l]=='L' && s[r]=='R'){
        sum+=pre[r+1]-pre[l];
        l++,r--;
    }
    else if(s[l]!='L') l++;
    else if(s[r]!='R') r--;
   }
   cout<<sum<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}