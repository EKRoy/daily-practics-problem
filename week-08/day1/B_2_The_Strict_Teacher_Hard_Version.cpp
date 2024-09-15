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
const int MOD=1e9+7;
void solve(){
    int n,m,k; cin>>n>>m>>k;
    vi a(m),q(k);
    rep(i,0,m-1) cin>>a[i];
    rep(i,0,k-1) cin>>q[i];
    vsort(a)
    for(int i=0;i<k;i++){
        int val=q[i];
        if(val<a[0]){
            cout<<(a[0]-1)<<endl;
        }
        else if(val>a[m-1]){
            cout<<n-a[m-1]<<endl;
        }
        else {
            // auto it=upper_bound(a.begin(),a.end(),val);
            auto it=vupperB(a,val);
            int p=*it;
            it--;
            int q=*it;
            cout<<(p-q)/2<<endl;
        }
    }
}
int main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}