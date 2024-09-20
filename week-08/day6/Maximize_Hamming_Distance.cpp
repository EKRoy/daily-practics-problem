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
    int n,m; cin>>n>>m;
    char a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int one=0,zero=0,what=0;
        for(int j=0;j<m;j++){
            if(a[j][i]=='1') one++;
            else if(a[j][i]=='0') zero++;
            else what++;
        }
        int mn=min(one,zero);
        int mx=max(one,zero);
        if((mn+what)<=mx){
            mn+=what;
        }
        else{
            what-=(mx-mn);
            mn=mx;
            mn+=(what+1)/2;
            mx+=(what/2);
        }
        ans+=mn*mx;
        // cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve() ;
    return 0;
}