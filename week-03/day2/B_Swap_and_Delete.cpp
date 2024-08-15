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
    string s; cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') zero--;
        if(s[i]=='0') one--;
        if(zero<0 || one<0){
            ans=zero+one+1;
            break;
        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}