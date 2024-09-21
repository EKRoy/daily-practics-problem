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
    ll N=1e6+7;
    vector<ll>possible(N);
void isCheck(){
    for(int k=2;k<=N;k++){
        ll total=1+k+k*k*1ll;
        ll x=k*k;
        if(total>N) break;
        while(total<N && total>0){
            possible[total]=1;
            total+=x*k;
            x*=k;
        }
    }
    for(int i=0;i<N;i++){
        // cout<<i<<" "<<possible[i]<<endl;
    }
}
void solve(){
    int n; cin>>n;
    if(possible[n]) py
    else pn
}
int32_t main()
{
   ft
   isCheck();
   TC(t)
   solve(); 
    return 0;
}