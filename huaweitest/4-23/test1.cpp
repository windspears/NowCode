#include <bits/stdc++.h>
using namespace std;
int main()
{
	//input a number ,read it form right to left and delete the same number
	int arr1[10] = {0};
	unsigned n;
	cin>>n;
	int num=0;
	while(n)
	{
		if(arr1[n%10] == 0)
		{
			arr1[n%10]++;
			num=(n%10)+num*10;
		}
		n/=10;
	}
	cout<<num<<endl;
	return 0;
}
