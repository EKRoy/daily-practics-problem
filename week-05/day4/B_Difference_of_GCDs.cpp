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
    int n,l,r; cin>>n>>l>>r;
    int a[n];
    bool ok=true;
    for(int i=1;i<=n;i++){
        if(l%i==0){
            a[i]=l;
        }
        else{
            int val=l%i;
            int x=i-val;
            x+=l;
            if(x>r){
                ok=false;
                break;
            }
            a[i]=x;
        }
    }
    if(ok){
        py
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else pn
}
int32_t main()
{
    ft
    TC(t)
    solve();
    return 0;
}