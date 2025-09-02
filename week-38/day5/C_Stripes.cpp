#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
    string s[8];
    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }
    
    for (int i = 0; i < 8; i++) {
        if (s[i] == string(8, s[i][0]) && s[i][0] == 'R') {
            cout << s[i][0] << "\n";
            return;
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < i; j++) {
            swap(s[i][j], s[j][i]);
        }
    }
    for (int i = 0; i < 8; i++) {
        if (s[i] == string(8, s[i][0]) && s[i][0] == 'B') {
            cout << s[i][0] << "\n";
            return;
        }
    }
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}