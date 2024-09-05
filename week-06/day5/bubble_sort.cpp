#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
            }
        }
    }
    for(int i:ar) cout<<i<<" ";
    return 0;
}