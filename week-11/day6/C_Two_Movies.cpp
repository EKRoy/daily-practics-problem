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
    vi a(n),b(n),c;
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    int cnt_a=0,cnt_b=0;
    rep(i,0,n-1){
        if(a[i]==b[i]){
            if(a[i]>0){
            if(cnt_a<cnt_b) cnt_a+=a[i];
            else if(cnt_a>cnt_b) cnt_b+=a[i];
            else{
                // cnt_a+=a[i];
                c.pb(a[i]);
            } 
            }
            else{
                if(cnt_a<cnt_b) cnt_b+=a[i];
            else if(cnt_a>cnt_b) cnt_a+=a[i];
            else{
                // cnt_a+=a[i];
                c.pb(a[i]);
            } 
            }
        }
        else if(a[i]>b[i]){
            cnt_a+=a[i];
        }
        else cnt_b+=b[i];
    }
    for(int i:c){
        if(i<0){
            if(cnt_a<cnt_b) cnt_b+=i;
            else if(cnt_a>cnt_b) cnt_a+=i;
            else cnt_a+=i;
        }
        else{
            if(cnt_a>cnt_b) cnt_b+=i;
            else cnt_a+=i;
        }
    }
    cout<<min(cnt_a,cnt_b)<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}