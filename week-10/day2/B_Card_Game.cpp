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
    vi a(2),b(2);
    rep(i,0,1){
        cin>>a[i];
    }
    rep(i,0,1){
        cin>>b[i];
    }
    vsort(a)
    vsort(b);
    if(a==b ||(a[1]<b[0]) ||((a[1]<=b[1])) &&(a[0]<=b[0])){
        cout<<0<<endl;
    }
    else if(a[0]>b[1]){
        cout<<4<<endl;
    }
    else if((a[0]==b[0] && a[1]>b[1]) ||(a[0]>b[0] && a[0]<b[1])){
        cout<<2<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}