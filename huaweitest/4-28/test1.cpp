#include<bits/stdc++.h>
using namespace std;
const string hp1 = "0123456789abcdefABCEDF";
const string hp2 = "084C2A6E195D3B7F5D3B7F";

int main()
{
	string str1,str2;
	while(cin>>str1)
	{
		cin>>str2;
		string s1,s2,s;
		s = str1+str2;
		int len = s.size();
		for(int i=0;i<len;i++)
		{
			if(i%2 == 0)
				s1+=s[i];
			else
				s2+=s[i];
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		//int len = str1.size();
		s.clear();
		for(int i=0,j=0,k=0;i<len;i++)
		{
			if(i%2 == 0)
				s+=s1[j++];
			else
				s+=s2[k++];
		}
		for(int i =0;i<len;i++)
		{
			int n = hp1.find(s[i]);
			if(n != -1)
				s[i] = hp2[n];
		}		
		cout<<s<<endl;
	}
	return 0;
}
