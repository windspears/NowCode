#include<bits/stdc++.h>
#define inf 1
using namespace std;

int solve(int* a,int* b,int* res,int n)
{
	//b[0]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if((res[j]==0)||((res[j]==-1)&&(a[i]>a[j]))||((res[j]==1)&&(a[i]<a[j])))
			{
				if(b[i]<b[j]+1)
				{
					b[i] = b[j]+1;
					if(a[i]>a[j])
						res[i]=1;
					if(a[i]<a[j])
						res[i]=-1;
				}				
				
			}
		}
	}
	return b[n-1];
}

int main()
{
	int a[1000],b[1000],res[1000],n;
	while(cin>>n&&n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = inf;
			res[i] = 0;
		}
		cout<<solve(a,b,res,n)<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n-1;i++)
		{
			cout<<res[i]<<" ";
		}
	}	
	return 0;
}
