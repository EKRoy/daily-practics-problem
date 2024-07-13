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
   vi b,c;
   int l=1,r=1,indx=-1;
   int cnt=0;
   for(int i=1;i<n;i++){
    if(a[i]<a[i-1]){
        if(cnt==0){
            b.pb(a[i-1]);
            cnt=1;
            l=i;
        }
        b.pb(a[i]);
        r=i+1;
    }
    else{
        if(cnt==1) 
        {
            indx=i;
            break;

        }
        c.pb(a[i-1]);
    }
   } 
   reverse(b.begin(),b.end());
   for(int val:b){
    c.pb(val);
   }
  if(indx!=-1){
     for(int i=indx;i<n;i++){
    c.pb(a[i]);
   }
  }
//    for(int val:c) cout<<val<<" ";
    vi d;
    for(int val:c){
        d.pb(val);
    }
    sort(d.begin(),d.end());
    if(c==d){
        cout<<"yes"<<nl;
         cout<<l<<" "<<r<<nl;
    }
    else cout<<"no"<<nl;
    return 0;
}