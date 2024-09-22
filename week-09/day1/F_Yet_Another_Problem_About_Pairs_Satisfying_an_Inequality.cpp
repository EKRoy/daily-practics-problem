#include<bits/stdc++.h>
using namespace std;
#define ll           long long
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
    vector<pair<int,int>>a;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        if(i>x)
        a.pb({x,i});
    }
    vsort(a);  
    ll ans=0;
    int s=a.size();
    for(int i=0;i<n;i++){
        bool okk=false;
        int l=i,r=a.size()-1,mid;
       while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid].F>a[i].S){
            r=mid-1;
            okk=true;
        }
        else l=mid+1;
      }
      if(okk)
      {
    ans=(ans+(s-r-1))*1ll;
      }
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}