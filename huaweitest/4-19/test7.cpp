#include <bits/stdc++.h>
using namespace std;

int main(void){
	double num;
	while(cin>>num)
	{
		int a=(int)num;
		if((num-a)*10>=5)
		{
			cout<<a+1;
		}
		else
		{
			cout<<a;
		}
	}
	return 0;
}
