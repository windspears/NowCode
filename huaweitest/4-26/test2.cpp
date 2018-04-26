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
	if(str1.length() != str2.length()) return false;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	return str1==str2;
}

int main()
{
	int n;
	while(cin>>n)
	{
		string str;
		string word,s2;
		int index,count=0;
		vector<string> vs;
		for(int i=0;i<n;++i)
		{	
			cin>>str;
			vs.push_back(str);
		}
		sort(vs.begin(),vs.end());

		cin>>word;
		cin>>index;
		for(int i=0;i<n;++i)
		{
			if(cmp(vs[i],word))
			{
				count++;
				if(count == index)
					s2 = vs[i];
			}
		}
		if(!vs.empty())
			cout<<count<<endl;
		if(count >= index)
			cout<<s2<<endl;
	}
	return 0;
}
