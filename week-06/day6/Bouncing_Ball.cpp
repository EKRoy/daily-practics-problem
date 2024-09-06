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
    int n; cin>>n;
    vi a(n);
    int total_sum=0,sum=0,ans=0;
    rep(i,0,n-1) {
        cin>>a[i];
        total_sum+=a[i];
    }
    rep(i,0,n-1){
        if(a[i]==0){
            int val=total_sum-sum;
            if(abs(val-sum)==1) ans+=1;
            else if(abs(val-sum)==0) ans+=2;
        }
        sum+=a[i];
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