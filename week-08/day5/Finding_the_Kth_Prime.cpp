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
vector<bool> a(1000001,true);
vector<int>primes;
void isPrime(){
    int N=1e6+1;
    a[0]=a[1]=false;
    for(int i=2;i*i<=N;i++){
        if(a[i]){
            for(int j=i+i;j<=N;j+=i){
                a[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(a[i]) primes.pb(i);
    }
}

int32_t main()
{
   ft
   isPrime();
   int t; cin>>t;
   while(t--){
     int n; cin>>n;
    cout<<primes[n-1]<<endl;

   } 
    return 0;
}