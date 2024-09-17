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
    ll N=1e6+5;
    vector<bool>prime(N+1,true);
    vector<ll>pnum(N+1,0);
    ll s=0;
void isprime(){

    for(ll i=2;i*i<=N;i++){
        if(prime[i]){
            for(ll j=i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }
    for(ll i=2;i<=N;i++){
        if(prime[i]){
            s+=i;
            pnum[i]=s;
        }
    }
}
void solve(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<n*2<<endl;
        return;
    }
    ll sum=0;
    if(prime[n]){
        sum=pnum[n];
    }
    else{
        ll p=0;
        for( p=3;p*p<=n;p++){
            if(n%p==0) break;
        }
        sum=pnum[p];
    }
    cout<<sum*n<<endl;
}
int main()
{
   ft
    isprime();
   TC(t)
   solve(); 
    return 0;
}