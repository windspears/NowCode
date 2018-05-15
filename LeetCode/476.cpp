#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int x,y=0;
		string s1;
		cin>>x;
		while(x!=0)
		{
			s1+= (x%2==0?'0':'1');
			x=x/2;
		}
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]=='0')
				y+=pow(2,i);
		}
		cout<<y<<endl;
	}
	return 0;
}
