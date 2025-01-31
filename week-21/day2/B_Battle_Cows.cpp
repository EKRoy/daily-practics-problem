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
    int n,k; cin>>n>>k;
    vi a(n+1);
    int mx=INT_MIN;
    rep(i,1,n) {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    if(a[k]>mx){
        cout<<n-1<<endl;
        return;
    }
    int cnt=0;
    if(k==1 || k==2){
        for(int i=1;i<=n;i++){
            if(a[k]>a[i]) cnt++;
            else if(a[k]==a[i]) continue;
            else break;
        }
        cout<<cnt<<endl;
        return;
    }
    vector<int>v2=a;
    v2[1]=v2[k];
    v2[k]=a[1];
    for(int i=2;i<=n;i++){
        if(v2[1]>v2[i]) cnt++;
        else break;
    }
    int cnt2=0,idx=0;
    for(int i=1;i<=n;i++){
        if(a[k]<a[i]) {
            idx=i;
            break;
        }
    }
    if(idx>1) cnt2=1;
    for(int i=idx+1;i<k;i++){
        if(a[k]>a[i]) {
            cnt2++;
        }
        else break;
    }
    // cout<<cnt<<" "<<cnt2<<endl;
    cout<<max(cnt,cnt2)<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}