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
    int l=1,r=n,m;
    bool ok=false;
    for(int i=1;i<=n;i++){
        r=n;
        int val=x-ar[i].F;
        l=i+1;
        while(l<r){
        if(ar[l].F+ar[r].F>val) r--;
        else if(ar[l].F+ar[r].F<val) l++;
        else{
            ok=true;
            m=ar[i].S;
            break;
        }
    }
    if(ok) break;
    }
    if(!ok) {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    cout<<ar[l].S<<" "<<ar[r].S<<" "<<m<<endl;
}
int32_t main()
{
   ft
   solve(); 
    return 0;
}