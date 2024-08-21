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
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n,m; cin>>n>>m;
    string x,s; cin>>x>>s;
    bool ok=false;
    for(int i=0;i<=5;i++){
        if(x.find(s)!=string::npos){
            cout<<i<<nl;
            ok=true;
            break;
        }
        x+=x;
    }
    if(!ok) cout<<-1<<nl;
   } 
    return 0;
}