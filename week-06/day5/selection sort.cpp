#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[idx]){
                idx=j;
            }
        }
        swap(a[i],a[idx]);
    }
    for(int i:a) cout<<i<<" ";
    return 0;
}