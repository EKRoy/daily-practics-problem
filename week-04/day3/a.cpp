#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int n=20;
    vector<bool>prime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    vi a;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            a.push_back(i);
        }
    }
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    map<int,int>mp;
    int x; cin>>x;
    int idx=0;
    while(x>1)
    {
        if(x%a[idx]==0) {
            mp[a[idx]]++;
            x/=a[idx];
        }
        else idx++;
    }
    for(auto [x,y]:mp)
    {
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}