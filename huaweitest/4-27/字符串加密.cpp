#include <bits/stdc++.h>
using namespace std;

void encrypt(string s1)
{
//TJm5Jpgv9gokaSPV4xa77ZeT7W08RI7G7DIp77k9Hx8zM9VfrK47qL05VaC6uf8P1p0EMu259D1Oj0P4lFi36MM
//ylV2Zv83sVqf1LF0P6soqMYF1aAv0i61iy0oScauz4Wv6HGo30C9v1xFus8e9JZ0VG6JF1680h2Zk3OV26ZYjg5YQHT09ig

    int len = s1.size();
	for(int i=0;i<len;i++)
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
			if(s1[i] == '9') s1[i] = '0';
			else s1[i] += 1;
		}
	}
	cout<<s1<<endl;
}

void unencrypt(string s2)
{
    int len = s2.size();
	for(int i=0;i<len;i++)
	{
		if(s2[i]>='A'&&s2[i]<='Z')
		{	
			if(s2[i] == 'A') s2[i] = 'z';
			else s2[i] += 31;
		}
		else if(s2[i]>='a'&&s2[i]<='z')
		{	
			if(s2[i] == 'a') s2[i] = 'Z';
			else s2[i] -= 33;
		}
		else if(s2[i]>='0'&&s2[i]<='9')
		{	
			if(s2[i] == '0') s2[i] = '9';
			else s2[i] -= 1;
		}
	}
	cout<<s2<<endl;
}


int main()
{
	string str1;
    string str2;
	while(getline(cin,str1))
    {
        getline(cin,str2);
	    encrypt(str1);
	    unencrypt(str2);
    }
	return 0;
}
