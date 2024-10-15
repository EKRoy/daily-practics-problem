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
    vi a(n),b(n);
    rep(i,0,n-1){
        cin>>a[i]>>b[i];
    }
    int l_mid,r_mid,mid;
    int l=0,r=1e9;
    while(l<=r){
        mid=l+(r-l)/2;
        l_mid=0,r_mid=mid;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(r_mid<a[i] || l_mid>b[i]){
                ok=false;
                break;
            }
            l_mid=max(l_mid,a[i]);
            r_mid=min(r_mid,b[i]);
            l_mid=max(0,l_mid-mid);
            r_mid=r_mid+mid;
        }
        if(ok){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}