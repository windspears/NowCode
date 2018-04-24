#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		int Upletter=0,Downletter=0,flagnumber=0,flagsymbol=0;
		if(s.length()<=8)
		{
			goto NG;
		}
		for(int k=0;k<s.length();k++)
		{
			if(s[k]>='a'&&s[k]<='z'){Downletter=1;}
			else if(s[k]>='0'&&s[k]<='9'){flagnumber=1;}
			else if(s[k]>='A'&&s[k]<='Z'){Downletter=1;}
			else {flagsymbol=1;}
		}
		if(Downletter+flagnumber+Downletter+flagsymbol<3)
		{
			goto NG;
		}
		for(int i=0;i<s.size()-6;i++)
			for(int j=i+3;j<s.size();j++)
				if(s[i]==s[j]&&s[i+1]==s[j+1]&&s[i+2]==s[j+2])
					{goto NG;}
	OK:
		cout<<"OK"<<endl;continue;
	NG:
		cout<<"NG"<<endl;
	}
	return 0;
	
}
