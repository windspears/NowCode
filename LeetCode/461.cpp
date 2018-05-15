#include <bits/stdc++.h>
using namespace std;
int main()
{	
	while(1)
	{
		int x,y;	
		cin>>x>>y;
		int dist =0,n=x ^ y;
		while(n)
		{
			++dist;
			n &=n-1;
		}
		cout<<dist<<endl;
	}
	return 0;
}
