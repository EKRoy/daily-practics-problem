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
   int n; string s;
   cin>>n>>s;
   string str=s;
   sort(str.begin(),str.end());
   if(s==str) cout<<"NO"<<endl;
   else{
    cout<<"YES"<<endl;
    bool ok=false;
    rep(i,1,n-1){
        if(s[0]>s[i]){
            cout<<1<<" "<<i+1<<endl;
            ok=true;
            break;
        }
    }
    if(!ok){
        int first=0;
        rep(i,1,n-1){
           if(s[first]<=s[i]){
            first=i;
           } 
           else{
            cout<<first+1<<" "<<i+1<<endl;
            break;
           }
        }
    }
   } 
    return 0;
}