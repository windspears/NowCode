#include<bits/stdc++.h>
using namespace std;
int main()
{
//解题思路：
//1.求当前字符与a或A的差值，按照差值的大小排序存储
//2.将原字符串的字符用新的字符串序列替代，非字符的不用改变
//1.自己原本的思路是，将字符拆分成，小写字母、大写字母、非字母字符三个部分，然后组合输出。
	string str;
	vector<char> orderstr;
	while(getline(cin,str))
	{
		/*vector<char>vs;
		vector<char>vch;
		vector<char>vCh;
		vector<char>vother;
		for(int i=0;i<str.size();i++)
		{
			vs.push_back(str[i]);
		}
		for(int i=0;i<vs.size();i++)
		{	
			if(vs[i]>='a'&&vs[i]<='z')
			{
				vch.push_back(vs[i]);
			}
			else if(vs[i]>='A'&&vs[i]<='Z')
			{
				vCh.push_back(vs[i]);
			}
			else
			{
				vother.insert(vs[i],i);
			}
		}
		sort(vch.begin(),vec.end());
		sort(vCh.begin(),vCh.end());
		for(int i=0;i<vs.size();i++)
		{
			if(vother[i])
			{
				cout<<vother[i];
			}
			else if((vch[i]-32)>vCh[i])
				cout<<vch[i];
		}*/
		orderstr.clear();
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<str.size();j++)
			{
					if(str[j]-'a'==i||str[j]-'A'==i)
					{	
						orderstr.push_back(str[j]);
					}
			}
		}
		for(int i=0,k=0;(i<str.size())&&(k<orderstr.size());i++)
		{
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
			{	
				str[i]=orderstr[k++];
			}
		}
		cout<<str<<endl;
	}
	return 0;
}
