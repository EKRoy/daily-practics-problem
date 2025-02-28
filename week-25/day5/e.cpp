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
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    rsort(a)
    int k=(n+1)/2;
    int sum1=a[0],sum2=0,cnt1=1,cnt2=0;
    for(int i=1;i<n;i++){
        if(sum1<sum2 && cnt1<k){
            sum1+=a[i];
            cnt1++;
        }
        else if(sum2<sum1 && cnt2<k){
            sum2+=a[i];
            cnt2++;
        }
        else{
            if(cnt1<cnt2){
                sum1+=a[i];
                cnt1++;
            }
            else{
                sum2+=a[i];
                cnt2++;
            }
        }
    }
    cout<<abs(sum1-sum2)<<endl;
}
int32_t main()
{
   ft
    TC(t)
    solve();
    return 0;
}