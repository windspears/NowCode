#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num)
	{
		char ch=num%10+'0';
		cout<<ch;
		num/=10;
	}
	return 0;
}
