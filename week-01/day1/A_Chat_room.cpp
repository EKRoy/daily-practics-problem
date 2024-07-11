#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   string s; cin>>s;
   string a="hello";
   vector<char>b(a.begin(),a.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==b[0]){
            b.erase(b.begin());
        }
        if(b.size()==0) break;
    }
    if(b.size()==0){
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
    return 0;
}