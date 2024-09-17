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
int isprime(int a)
{ 
if(a==1) return 0;
 for(int i=2;i<=sqrt(a);i++)
 if(a%i==0)return 0; 
return 1;
}
void solve(){
     int n;
 cin>>n; 
long long int x; 
long long int a; 
while(n--) 
{
 cin>>x;
 a=sqrt(x); 
if(a*a==x) 
{
 if(isprime(a)) 
cout<<"YES"<<endl; 
else
 cout<<"NO"<<endl;
 }
 else cout<<"NO"<<endl; 
}
}
int main()
{
   ft
   solve(); 
    return 0;
}