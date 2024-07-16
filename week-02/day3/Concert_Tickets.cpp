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
   int n,m; cin>>n>>m;
   multiset<int>ml;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    ml.insert(x);
   } 
   
   for(int i=0;i<m;i++){
    int x; cin>>x;
    auto it=ml.upper_bound(x);
    if(it==ml.begin()){
        cout<<-1<<nl;
        continue;
    }
    else{
        cout<<*(--it)<<nl;
        ml.erase(it);
    }
   }
    return 0;
}