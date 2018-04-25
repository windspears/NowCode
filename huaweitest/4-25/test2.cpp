#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	/*while(cin>>n)
	{
		int count=0;
		while(n>=2)
		{
			count += n/3;
			n = n%3+n/3;
			if(n==2){count++;break;}
		}
		cout<<count<<endl;
	}*/
	while(cin>>n)
	{
		if(!n) exit(0);
		cout<<n/2<<endl;
	}
	return 0;
}
