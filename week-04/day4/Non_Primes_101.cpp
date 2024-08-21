#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    vi even,odd;
    bool f=false;
    bool ok=false;
    rep(i,0,n-1){
        if(a[i]%2==0){
            even.pb(i+1);
        }
        else{
            if(a[i]==1 && !f){
                f=true;
                odd.pb(i+1);
            }
            else if(a[i]!=1) odd.pb(i+1);
        }
        if(even.size()>=2) 
        {
            cout<<even[0]<<" "<<even[1]<<nl;
            ok=true;
            break;
        }
        if(odd.size()>=2) {
            cout<<odd[0]<<" "<<odd[1]<<nl;
            ok=true;
            break;
        }
    }
    if(!ok){
        int x=0,y=0;
        rep(i,0,n-1){
            if(a[i]%2==0) x=a[i];
            else y=a[i];
        }
        if(x==0) cout<<-1<<nl;
        else{
            int val=x+y;
            bool hum=false;
            for(int i=2;i<val;i++){
                if(val%i==0){
                    cout<<1<<" "<<2<<nl;
                    hum=true;
                    break;
                }
            }
            if(!hum) cout<<-1<<nl;
        }
    }
}
int32_t main()
{
    ft;
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}