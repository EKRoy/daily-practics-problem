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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n-1;i++){
    bool ok=false;
    for(int j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            ok=true;
        }
    }
    if(!ok) break;
   } 
   for(int val:a) cout<<val<<" ";
    return 0;
 }