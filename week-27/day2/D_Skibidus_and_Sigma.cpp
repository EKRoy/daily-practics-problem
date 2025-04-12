#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int i;
	int a[32]={1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111};
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		for(i=30;i>=1;i--)
		{
			while(x%a[i]==0)
				x/=a[i];
		}
		if(x==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}