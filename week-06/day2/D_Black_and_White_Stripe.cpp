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
    int n,k; string s; 
    cin>>n>>k>>s;
    map<char,int>mp;
    for(int i=0;i<k;i++){
        mp[s[i]]++;
    }
    int ans=mp['W'];
    // mp[s[0]]--;
    for(int i=k;i<n;i++){
        mp[s[i-k]]--;
        mp[s[i]]++;
        int cnt=mp['W'];
        if(mp['W']<0){
        cnt=max(0ll,mp['W']);
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}