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
    int n,m; cin>>n>>m;
    if(m==1){
        cout<<0<<endl;
        for(int i=0;i<n;i++){
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<min(n+1,m)<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<(i%(m-1)+j)%m<<" ";
            }
            cout<<endl;
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