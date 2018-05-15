#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	while(cin>>s1)
	{
		int c1=0,c2=0;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i] == 'R')
				c1++;
			if(s1[i] == 'L')
				c1--;
			if(s1[i] == 'U')
				c2++;
			if(s1[i] == 'D')
				c2--;
		}
		if(c1==0&&c2==0)
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}
	return 0;
}
