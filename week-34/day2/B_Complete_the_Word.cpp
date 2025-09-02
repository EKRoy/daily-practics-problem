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
   int n=s.size();
   if(n<26){
    cout<<-1<<endl;
    return;
   }
   map<char,int>mp;
   int l=0,r=0,cnt=0;
   bool flag=false;
   while(r<n){
    if(r-l+1==26){
        if(s[r]!='?'){
            mp[s[r]]++; 
        }
        else cnt++;
        if(mp.size()+cnt==26){
            flag=true;
            break;
        }
        if(s[l]!='?')
        {
            mp[s[l]]--;
            if(mp[s[l]]==0)
            mp.erase(s[l]);
        }
        else if(s[l]=='?') cnt--;
        r++,l++;
    }
    else{
        if(s[r]!='?') mp[s[r]]++;
        else cnt++;
        r++;
    }
   }
   if(flag){
    for(int i=0;i<l;i++) {
        if(s[i]=='?') cout<<"A";
        else cout<<s[i];
    }
    for(int i=l;i<=r;i++){
        if(s[i]!='?'){
            cout<<s[i];
        }
        else{
            for(char ch='A';ch<='Z';ch++){
                if(mp[ch]==0){
                    cout<<ch;
                    mp[ch]++;
                    break;
                }
            }
        }
    }
    for(int i=r+1;i<n;i++) {
        if(s[i]=='?') cout<<"A";
        else cout<<s[i];
    }
   }
   else cout<<-1<<endl;
}
int32_t main()
{
   ft
  solve();
   
    return 0;
}