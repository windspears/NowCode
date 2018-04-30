#include<bits/stdc++.h>
using namespace std;

bool isaword(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		return true;
	else 
		return false;
}

int main()
{
	string input;
	while(getline(cin,input))
	{
		string temp;
		stack<string> st1;
		bool flag = true;
		
		int len = input.size();
		for(int i=0;i<len;i++)	
		{
			if(isaword(input[i]))
			{
				temp+=input[i];
				flag =true;
			}
			else if(!isaword(input[i])&&flag == true)
			{
				flag = false;
				st1.push(temp);
				temp.clear();
			}
		}
		while(!st1.empty())
		{
			cout<<st1.top();
			st1.pop();
			if(!st1.empty())
				cout<<" ";
			else
				cout<<endl;
		}
	}
	return 0;
}
