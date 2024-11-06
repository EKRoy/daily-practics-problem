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
    int n,k,x; cin>>n>>k>>x;
    if(x!=1){
        py
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else if(k==1){
        pn
    }
    else if(k==2){
        if(n%2==0){
            py
            cout<<n/k<<endl;
            for(int i=0;i<n/k;i++){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        else{
            pn
        }
    }
    else{
        py
        if(n%2==0){
            cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        }
        if(n%2==1) {
            cout<<(n)/2<<endl;
            for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
        }
    }
}
int32_t main()
{
   ft
   TC(t)
   solve();
    return 0;
}