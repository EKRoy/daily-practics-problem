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
int sum(int n){
    n++;
    int val=n*(n+1)/2;
    return val;
}
int sum2(int n,int k){
    
    int val=k*(k+1)/2;
    int l=(2*k-1)-n-1;
    int m=l*(l+1)/2;
    int val2=val+val-m-k;
    return val2;
}
void solve(){
    int k,x; cin>>k>>x;
    int l=0,r=2*k-2;
    int ans=2*k-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        int val=0;
        if(mid<k){
           val=sum(mid);
        }
        else{
            val=sum2(mid,k);
        }
        if(val<x){
            l=mid+1;
        }
        else{
            ans=mid+1;
            r=mid-1;
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