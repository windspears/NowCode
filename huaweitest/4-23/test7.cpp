#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		while(n!=0)
		{
			if(n%2 == 1)
			{
				count++;
			}
			n/=2;
		}
		cout<<count<<endl;
	}
	return 0;
}
