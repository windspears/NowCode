#include <bits/stdc++.h>
using namespace std;

bool cmp(string str1,string str2)
{
//排序后比较的方法存在下述两种：酌情使用！
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
//解题思路：
//1.接收输入的字符串，sort；
//2.循环比较，遇到同样组成但是不同序列的，记录
//3.输出指定的字符串
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
//对主字符串进行排序，后查找的对应编号的才是正确的！
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
	//考虑边界条件输出
		if(!vs.empty())
			cout<<count<<endl;
		if(count >= index)
			cout<<s2<<endl;
	}
	return 0;
}
