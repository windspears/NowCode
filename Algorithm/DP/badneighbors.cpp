#include<bits/stdc++.h>
using namespace std;

int solve(int* a,int* res,int n)
{
//calculate the max sum between 0..n-1 and 1..n;
	int maxsum1=a[0],maxsum2=a[1];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			if(res[j]+a[i]  > res[i])
				res[i] = res[j] + a[i];	
			if(maxsum1<res[i])
				maxsum1 = res[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		res[i]=a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<i-1;j++)
		{
			if(res[j] + a[i] > res[i])
				res[i] = res[j] + a[i];
			if(res[i]>maxsum2)
				maxsum2 = res[i];
		}
	}
	return maxsum1>maxsum2?maxsum1:maxsum2;
}

int main()
{
	int a[1000],res[1000],n;
	while(cin>>n&&n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			res[i] = a[i];
		}
		cout<<solve(a,res,n)<<endl;
	}
	return 0;
}

