#include <bits/stdc++.h>
using namespace std;

bool cmp(string str1,string str2)
{
	/*if(str1.length() != str2.length()) return 0;
	int a1[128]={0},a2[128]={0};
	int i,j;
	for(i=0;i<str1.length();i++)
	{
		a1[str1[i]] = 1;
		a2[str2[i]] = 1;
	}
	for(j=0;j<i;j++)
	{
		if(a1[j] != a2[j])return 0;
	}
	if(j==i) return 1;*/
	if(str1 == str2) return false;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	return str1==str2;
}

int main()
{
	int n;
	string str;
	vector<string> vs;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{	
			cin>>str;
			vs.push_back(str);
		}
		string s1,s2="";
		int num,count=0;
		cin>>s1>>num;
		for(int i=0;i<n;i++)
		{
			if(vs[i] != s1)
			{
				if(cmp(vs[i],s1))
				{
					count++;
					if(count == num)
						s2 = vs[i];
				}
			}
		}
		cout<<count<<" "<<s2<<endl;
	}
	return 0;
}
