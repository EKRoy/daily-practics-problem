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
    vi a(n+1);
    rep(i,1,n){
        cin>>a[i];
    }
    int l=1,r=n;
    int mn=1,mx=n;
    while(l<=r){
        if(a[l]==mn){
            l++;
            mn++;
        }
        else if(a[l]==mx){
            l++;
            mx--;
        }
        else if(a[r]==mn){
            r--;
            mn++;
        }
        else if(a[r]==mx){
            r--;
            mx--;
        }
        else break;
    }
    if(l<=r){
        cout<<l<<" "<<r<<endl;
    }
    else cout<<-1<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}