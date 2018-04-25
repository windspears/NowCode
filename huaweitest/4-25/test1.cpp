#include<bits/stdc++.h>
using namespace std;
char Changeletter(char ch)
{
	if(ch>='A'&&ch<='Z')
		if(ch!='Z')
		{
			return(ch+33);
		}
		else return 'a';
	else if(ch>='a'&&ch<='z')
		{
			if(ch>='a'&&ch<='c')return '2';
			if(ch>='d'&&ch<='f')return '3';
			if(ch>='g'&&ch<='i')return '4';
			if(ch>='j'&&ch<='k')return '5';
			if(ch>='m'&&ch<='o')return '6';
			if(ch>='p'&&ch<='s')return '7';
			if(ch>='t'&&ch<='v')return '8';
			if(ch>='w'&&ch<='z')return '9';
		}
	else return ch;
}

int main()
{
	string str;
	while(cin>>str)
	{
		//cout<<str.size()<<endl;
		for(int i=0;i<str.size();i++)
		{
			str[i]=Changeletter(str[i]);
		}
		cout<<str<<endl;
	}
	return 0;
}
