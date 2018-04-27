#include <bits/stdc++.h>
using namespace std;

void encrypt(string &s1)
{
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{	
			if(s1[i] == 'Z') s1[i] = 'a';
			else s1[i] += 33;
		}
		else if(s1[i]>='a'&&s1[i]<='z')
		{	
			if(s1[i] == 'z') s1[i] = 'A';
			else s1[i] -= 31;
		}
		else if(s1[i]>='0'&&s1[i]<='9')
		{	
			if(s1[i] == '9') s1[i] = '1';
			else s1[i] += 1;
		}
	}
	cout<<s1<<endl;
}

void unencrypt(string &s2)
{
	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]>='A'&&s2[i]<='Z')
		{	
			if(s2[i] == 'A') s2[i] = 'z';
			else s2[i] += 31;
		}
		else if(s2[i]>='a'&&s2[i]<='z')
		{	
			if(s2[i] == 'a') s2[i] = 'Z';
			else s2[i] -= 31;
		}
		else if(s2[i]>='0'&&s2[i]<='9')
		{	
			if(s2[i] == '1') s2[i] = '9';
			else s2[i] -= 1;
		}
	}
	cout<<s2<<endl;
}


int main()
{
	string str1,str2;
	cin>>str1>>str2;
	encrypt(str1);
	unencrypt(str2);
	return 0;
}
