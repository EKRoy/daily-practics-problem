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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    int ar[n+1],d1[k+1],d2[k+1];
    int sum=0;
    rep(i,1,n){
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar+1,ar+n+1);
    for(int i=1;i<=2*k;i+=2){
        d1[i/2+1]=ar[i]+ar[i+1];
    }
    for(int i=1;i<=k;i++){
        d2[i]=ar[n+1-i];
    }
    rep(i,2,k){
        d1[i]+=d2[i-1];
        d2[i]+=d2[i-1];
    }
    int mn=min(d1[k],d2[k]);
    rep(i,1,k-1){
        mn=min(mn,d1[i]+d2[k-i]);
    }
    cout<<sum-mn<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve() ;
    return 0;
}