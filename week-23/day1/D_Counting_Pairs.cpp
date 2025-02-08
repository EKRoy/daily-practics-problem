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
    ll n,x,y; cin>>n>>x>>y;
    vi a(n);
    ll sum=0;
    rep(i,0,n-1) {
        cin>>a[i];
        sum+=a[i];
    }
    vsort(a);
    ll ans=0;
    for(int i=0;i<n-1;i++){
        int l=i+1,r=n-1,mid;
        ll value1=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            ll s=a[i]+a[mid];
           ll rem=sum-s;
            if(rem>=x && rem<=y){
                value1=mid;
                r=mid-1;
            }
            else if(rem<x) r=mid-1;
            else l=mid+1;
        }

        l=i+1,r=n-1,mid;
          ll value2=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            ll s=a[i]+a[mid];
            s=sum-s;
            if(s<=y && s>=x){
                value2=mid;
                l=mid+1;
            }
            else if(s<x) r=mid-1;
            else 
            l=mid+1;
        }
        // cout<<value1<<" "<<value2<<endl;
        if(value1==-1 && value2==-1)
        {

        }
        else
       ans+=value2-value1+1;
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