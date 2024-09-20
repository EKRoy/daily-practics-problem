#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ar[45];
    ar[0]=1,ar[1]=1;
    for(int i=2;i<45;i++){
        ar[i]=ar[i-2]+ar[i-1];
    }
    for(int i:ar) cout<<i<<" ";
    return 0;
}