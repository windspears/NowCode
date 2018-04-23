#include<bits/stdc++.h>
using namespace std;
void myreverse(string* s1,int src,int des)
{
	for(int i=src,j=des;i<j;i++,j--)
	{
		char temp;
		temp = (*s1)[i];
		(*s1)[i] = (*s1)[j];
		(*s1)[j] = temp;
	}
}
int main()
{
	string s1;
	getline(cin,s1);
	myreverse(&s1,0,s1.size()-1);
	int count=0;		
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i] != ' ')
		{
			count++;
		}
		else if(i != s1.size()-1)
		{
			myreverse(&s1,i-count,i-1);
			count=0;
		}
	}
	myreverse(&s1,s1.size()-count,s1.size()-1);
	cout<<s1<<endl;
	return 0;
}
