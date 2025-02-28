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
    int k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll ans=1,sum=0;
    for(int i=1;i<=32;i++){
        int l=l1,r=r1;
        ll left=0;
        while(l<=r){
            ll mid=(r+l)/2;
            ll val=mid*ans*1ll;
            if(val>=l2){
                left=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        l=l1,r=r1;
        ll right=0;
        while(l<=r){
            ll mid=(l+r)>>1;
            ll val=mid*ans*1ll;
            if(val<=r2){
                right=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        if(left!=0 && right!=0){
          sum+=(right-left)+1;  
        }
        if(ans*k*1ll>r2) break;
        ans=ans*k*1ll;
    }
    cout<<sum<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}