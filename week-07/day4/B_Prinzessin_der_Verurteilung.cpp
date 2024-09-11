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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n; string s;
    cin>>n>>s;
    for(int i=0;i<26;i++){
        string now="";
        now+=(i+'a');
        if(s.find(now)==string::npos){
            cout<<now<<endl;
            return;
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string now="";
            now+=(i+'a');
            now+=(j+'a');
            if(s.find(now)==string::npos){
                cout<<now<<endl;
                return;
            }
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            for(int k=0;k<26;k++){
                string now="";
                now+=(i+'a');
                now+=(j+'a');
                now+=(k+'a');
                if(s.find(now)==string::npos){
                    cout<<now<<endl;
                    return;
                }
            }
        }
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}