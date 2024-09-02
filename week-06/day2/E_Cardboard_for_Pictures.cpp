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
    int n,c; cin>>n>>c;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    int l=1,r=1e9;
    while(l<=r){
        int mid=l+(r-l)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]+2*mid)*(a[i]+2*mid);
            if(sum>c) break;
        }
        if(sum==c){
            cout<<mid<<endl;
            return;
        }
        else if(sum>c){
            r=mid-1;
        }
        else l=mid+1;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}