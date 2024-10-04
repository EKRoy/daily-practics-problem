#include<bits/stdc++.h>
using namespace std;
#define int            long long
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
    vi a;
    int m=n;
    while(m){
        if(m%2){
            a.pb(1);
        }
        else a.pb(0);
        m/=2;
    }
    int cnt=count(a.begin(),a.end(),1);
    // cout<<cnt<<endl;
    if(cnt==1){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    vi ans;
    ans.pb(n);
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            int val=(1<<i);
            ans.pb(n-val);
        }
    }
    vrev(ans)
    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}