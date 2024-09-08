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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n,k; cin>>n>>k;
    vi a(n),b(k);
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,k-1) cin>>b[i];
    for(int i=0;i<k;i++){
        int x=b[i];
    int val=find(a.begin(),a.end(),x)-a.begin();
    cout<<val+1<<" ";
    rotate(a.begin(),a.begin()+val,a.begin()+val+1);
    }
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}