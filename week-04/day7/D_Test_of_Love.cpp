#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
void solve(){
     int n,m,k; cin>>n>>m>>k;
    string s;cin>>s;
    vi logs;
    rep(i,0,n-1) if(s[i]=='L') logs.pb(i);
    logs.pb(n+1);
    int i=-1;
    int next_log=0;
    while(i<n-1)
    {
        if(m>=logs[next_log]-i){
            i=logs[next_log];
        }
        else{
            i+=m;
            if(i>n-1)
            {
                cout<<"YES"<<endl;
                return ;
            }
            while(i<n && i<logs[next_log]){
                if(s[i]!='C' && k>0){
                    i++;
                    k--;
                }
                else{
                    cout<<"NO"<<endl;
                    return ;
                }
            }
        }
        next_log++;
    }
    cout<<"YES"<<endl;
}
int32_t main()
{
   int tc; cin>>tc;
   while(tc--){
   solve();
   } 
    return 0;
}