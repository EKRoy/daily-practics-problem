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
    ll n,d; cin>>n>>d;
    vi ans;
    ans.pb(1);
    for(int i=3;i<=9;i+=2){
        ll num=d;
        int r=1;
        bool f=true;
        while(num%i){
            num*=10;
            num+=d;
            num%=i;
            r++;
            if(r>=i+1){
                f=false;
                break;
            }
        }
        if(!f){
            continue;
        }
        if(n>=r) ans.pb(i);
        else{
            ll val=1;
            for(int j=1;j<=n;j++){
                val*=j;
            }
            if(val%r==0){
                ans.pb(i);
            }
        }
    }
    for(int val:ans) cout<<val<<" ";
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}