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
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int m; cin>>m;
    vi d(m);
    for(int i=0;i<m;i++) cin>>d[i];
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        if(d[m-1]==b[i]){
            ok=true;
        }
    }
    if(ok)
    {
        multiset<int>v;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                v.insert(b[i]);
            }
        }
       for(int i=0;i<m;i++)
       {
        int x=d[i];
        if(v.find(x)!=v.end())
        {
            v.erase(v.find(x));
        }
       }
       if(v.empty()){
        cout<<"YES"<<nl;
       }
       else cout<<"NO"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
   } 
    return 0;
}