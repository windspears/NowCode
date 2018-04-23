#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	getline(cin,s1);
	int len = s1.size();
	for(int i=len-1;i>=0;i--)
		cout<<s1[i];
}
