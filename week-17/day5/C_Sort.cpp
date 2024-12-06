#include<bits/stdc++.h>
using namespace std;
#define ll            long long
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
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
    int n,q; cin>>n>>q;
    string s,t; cin>>s>>t;
    vector<vector<int>>freS(26,vector<int>(n,0));
    vector<vector<int>>freT(26,vector<int>(n,0));

    for(int i=0;i<n;i++){
        freS[s[i]-'a'][i]++;
    }
    for(int i=0;i<n;i++){
        freT[t[i]-'a'][i]++;
    }
    for(int i=0;i<26;i++){
        for(int j=1;j<n;j++){
            freS[i][j]+=freS[i][j-1];
            freT[i][j]+=freT[i][j-1];
        }
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int cnt=0,diff=0;
        for(int i=0;i<26;i++){
            int cnt_s=freS[i][r];
            int cnt_t=freT[i][r];
            if(l>0){
            cnt_s-=freS[i][l-1];
            cnt_t-=freT[i][l-1];
            }
            diff+=abs(cnt_s-cnt_t);
        }
        cnt+=diff/2;
    cout<<cnt<<endl;
    }
    // for(int i=0;i<26;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<freS[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}