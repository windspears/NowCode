#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		vector<string> v1;
		string str;
		while(n--)
		{
			cin>>str;
			v1.push_back(str);
		}
		sort(v1.begin(),v1.end());
		for(vector<string>::iterator it = v1.begin();it != v1.end();it++)
		{
			cout<<*it<<endl;
		}
	}
	return 0;
}
