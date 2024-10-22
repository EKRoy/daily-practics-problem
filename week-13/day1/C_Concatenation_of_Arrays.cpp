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
int32_t main()
{
   ft
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vector<pii>a(n);
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a[i].F=x,a[i].S=y;
    }
    sort(a.begin(),a.end(),[&](pair<int,int>x,pair<int,int>y){
        if(max(x.F,x.S)==max(y.F,y.S)) return min(x.F,x.S)<min(y.F,y.S);
        else return max(x.F,x.S)<max(y.F,y.S);
    });
    for(int i=0;i<n;i++){
        cout<<a[i].F<<" "<<a[i].S<<" ";
    }
    cout<<endl;
   }
    return 0;
}