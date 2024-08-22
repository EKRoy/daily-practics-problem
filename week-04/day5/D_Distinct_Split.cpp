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
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    string s; cin>>s;
    vector<int>freq1(26,0),freq2(26,0);
    rep(i,0,n-1) freq1[s[i]-'a']++;
    int ans=0;
    rep(i,0,n-1){
        freq1[s[i]-'a']--;
        freq2[s[i]-'a']++;
        int curr=0;
        for(int i=0;i<26;i++){
            curr+=min(1*1ll,freq1[i])+min(1*1ll,freq2[i]);
        }
        ans=max(curr,ans);
    }
    cout<<ans<<endl;
   } 
    return 0;
}