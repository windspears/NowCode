#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	int arr1[128]={0};
	cin>>s1;
	int len=s1.length();
	int count=0;
	for(int i=0;i<len;i++)
	{
		if(s1[i]>=0 && s1[i]<= 127)
			arr1[s1[i]]++;
	}
	for(int i=0;i<128;i++)
	{
		if(arr1[i])
			count++;
	}
	cout<<count<<endl;
}
