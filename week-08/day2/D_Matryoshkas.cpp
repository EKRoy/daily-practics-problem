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
    map<int,int>cnt;
    rep(i,0,n-1) 
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    vsort(a)
    int ans=0;
    for(int i=0;i<n;i++){
        int v=a[i];
        if(cnt[a[i]]>0){
            ans++;
            while(cnt[v]>0){
                cnt[v]--;
                 v++;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}