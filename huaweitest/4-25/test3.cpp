#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[128]={0};
	string str;
	while(cin>>str)
	{
		//count the number of char
		for(int i=0;i<str.size();i++)
		{
			arr1[str[i]]++;
		}
		//find the min count
		//sort(arr1,arr1+128);
		int min=20;
		for(int i=0;i<128;i++)
		{
			if(arr1[i] !=0)
			{
				if(arr1[i]<min)
					min=arr1[i];
			}
		}
		//delete the least count of the char
		for(int i=0;i<str.size();i++)
		{
			if(arr1[str[i]] != min) 
				cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}
