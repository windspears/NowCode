#include <bits/stdc++.h>
using namespace std;
#define inf 10000

int Minpath(int n,int* a,int* b,int* path)
{
	
		b[0]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{	
				if(i-j <= a[j] && b[i]>b[j]+1)
				{
					b[i] = b[j]+1;
					path[i] = j;
				}
			}
		}
	
	return b[n-1];
}

int main()
{
	int n;
	//cin>>n;
	int a[1000],b[1000],res[1000],path[1000];
while(cin>>n&&n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i] = inf;
		res[i]=0;
		path[i]=0;
	}
	cout<<Minpath(n,a,b,path)<<" ";
	int i=n-1,j=0;
	while(i != 0)
	{
		res[j++] = i;
		i = path[i];
	}
	cout<<a[0];	
	for(int i=j-1;i>=0;i--)
		cout<<","<<a[res[i]];
}

	return 0;
}
