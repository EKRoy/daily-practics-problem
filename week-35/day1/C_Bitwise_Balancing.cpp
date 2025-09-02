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
map<tuple<int,int,int>,int>mp;
void solve(){
   ll b,c,d,a=0; cin>>b>>c>>d;
   for(int i=60;i>=0;i--){
    int x=(((1ll<<i)& b)!=0);
    int y=(((1ll<<i)& c)!=0);
    int z=(((1ll<<i)& d)!=0);
    int m=mp[{x,y,z}];
    if(m==-1)
    {
        a=-1;
        break;
   }
     else a+=m*(1ll<<i);
   }
   cout<<a<<endl;
}
int32_t main()
{
   ft
   mp[{0,0,0}]=0;
   mp[{0,0,1}]=1;
   mp[{0,1,0}]=0;
   mp[{0,1,1}]=-1;
   mp[{1,0,0}]=-1;
   mp[{1,0,1}]=1;
   mp[{1,1,0}]=1;
   mp[{1,1,1}]=0;
 TC(t) solve();
   
    return 0;
}