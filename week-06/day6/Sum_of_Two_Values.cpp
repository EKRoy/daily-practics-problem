#include<bits/stdc++.h>
using namespace std;
#define ll           long long
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
    int n,x; cin>>n>>x;
    vector<pii>ar(n+1);
    for(int i=1;i<=n;i++){
        cin>>ar[i].F;
        ar[i].S=i;
    }
    vsort(ar)
    int l=1,r=n;
    bool ok=false;
    while(l<r){
        if(ar[l].F+ar[r].F>x) r--;
        else if(ar[l].F+ar[r].F<x) l++;
        else{
            ok=true;
            break;
        }
    }
    if(!ok) {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    cout<<ar[l].S<<" "<<ar[r].S<<endl;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}