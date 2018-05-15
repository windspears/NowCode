#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> Morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
		".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
		".--","-..-","-.--","--.."};
	vector<string> str1;
	unordered_set<string> str2;
	string s1;
	cin>>s1;
	str1.push_back(s1);
//if the length of str1 dont input ,wo cant get the symbol  of the end!
	for(auto word : str1)
	{
		string code;
		for(auto c:word)
		{
			code +=Morse[c-'a'];
		}
		cout<<code<<endl;
		str2.insert(code);
	}
	/*for(int i=0;i<str1.size();i++)
	{
		string s2 = str1[i],s3="";
		for(int j=0;j<s2.size();j++)
		{
			s3+=Morse[s2[j]-'0'];
		}
		str2.push_back(s3);
	}
	int a[str2.size()]={0};
	for(int i=0;i<str2.size();i++)
	{
		int cnt=0;
		for(int j=0;j<str2.size();j++)
		{
			if(str2[j] == str2[i])
				cnt++;
		}
		if(a[i]==0)
			a[i] = cnt;
	}
	int sum=0;
	for(int i=0;i<str2.size();i++)
	{
		sum+=a[i];
	}*/
	cout<<str2.size()<<endl;
	return 0;
}
