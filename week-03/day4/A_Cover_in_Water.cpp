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
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0,ans=0;
    for(char ch:s){
        if(ch=='.') cnt++;
        else{
            if(cnt>2){
                ans=2;
                cnt=0;
                break;
            }
            else{
                ans+=cnt;
                cnt=0;
            }
        }
        
    }
    if(cnt!=0){
        if(cnt>2) ans=2;
        else
            ans+=cnt;
        }
    cout<<ans<<nl;
   } 
    return 0;
}