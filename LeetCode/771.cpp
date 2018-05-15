#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{	
		string j,s1;
		int a[128]={0};
		cin>>j>>s1;
		for(int i=0;i<j.size();i++)
		{
			a[j[i]] = 1;
		}
		int count=0;
		for(int i=0;i<s1.size();i++)
		{
			if(a[s1[i]] == 1) 
			{	count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
