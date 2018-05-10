#include<bits/stdc++.h>
#define inf -1
using namespace std;

int solve(int* a,int* b,int n)
{
	b[0]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i] && b[i]<b[j]+1)
			{
				b[i] = b[j]+1;
				//res[i]=j;
			}
		}
	}
	return b[n-1];
}

int main()
{
	int n;
	int a[1000],b[1000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = inf;
		}
		cout<<solve(a,b,n)<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<",";
		}
	}
	return 0;
}
