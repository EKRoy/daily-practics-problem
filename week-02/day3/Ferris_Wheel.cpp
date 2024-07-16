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
   int n,x; cin>>n>>x;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
   int l=0,r=n-1;
   int cnt=0;
   while(l<=r){
    if(a[l]+a[r]<=x){
        l++;
    }
    cnt++;
    r--;
   } 
   cout<<cnt<<nl;
    return 0;
}