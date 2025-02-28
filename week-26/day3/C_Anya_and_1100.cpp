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
void solve(){
    string s; cin>>s;
    int q; cin>>q;
    int n=s.size();
    int cnt=0;
    if(n<4){
        while(q--){
            int i;
            char ch;
            cin>>i>>ch;
            pn
        }
        return;
    }
    for(int i=0;i<n-3;i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
            cnt++;
        }
    }
    while(q--){
        int i;
        char ch;
        cin>>i>>ch;
        i--;
        if(s[i]!=ch){
            for(int j=i-3;j<=i;j++){
                if(j<0 || j+3>=n) continue;
                if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='0' && s[j+3]=='0'){
                    cnt--;
                    break;
                }
            }
            s[i]=ch;
            for(int j=i-3;j<=i;j++){
                if(j<0 || j+3>=n) continue;
                if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='0' && s[j+3]=='0'){
                    cnt++;
                    break;
                }
            }
        }
        cout<<(cnt>0?"YES":"NO")<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}