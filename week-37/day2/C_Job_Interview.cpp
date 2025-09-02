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
void solve(){
   int n,m; cin>>n>>m;
   vi a(n+m+1),b(n+m+1);
   rep(i,0,n+m) cin>>a[i];
   rep(i,0,n+m) cin>>b[i];
   int x=0;
   for(int i=0;i<n+m+1;i++){
    if(a[i]>b[i]) x++;
   }
   if(x<=n) {
    swap(n,m);
    swap(a,b);
   }
   x=0;
   ll sum1=0,sum2=0;
   for(int i=0;i<n+m+1;i++){
    if(x>n){
        sum1+=b[i];
        sum2+=b[i];
    }
    else if(a[i]>b[i]){
        sum1+=a[i];
        sum2+=(x==n ? b[i]:a[i]);
        x++;
    }
    else{
        sum1+=b[i];
        sum2+=b[i];
    }
   }
   x=0;
//    cout<<sum1<<" "<<sum2<<endl;
   for(int i=0;i<n+m+1;i++){
    if(a[i]>b[i] && x<=n){
        cout<<sum1-a[i]<<" ";
        x++;
    }
    else cout<<sum2-b[i]<<" ";
   }
   cout<<endl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}