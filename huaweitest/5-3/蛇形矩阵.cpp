#include <bits/stdc++.h>
using namespace std;

int main()
{
//题目很简单主要是利用循环控制输出，利用信号量控制输出的增量即可
	int N;
	while(cin>>N)
	{
		int cnt1=1;
		for(int i=1;i<=N;i++)
		{
			cout<<cnt1;
			int cnt2=cnt1;
			for(int j=i+1;j<=N;j++)
			{
				cnt2+=j;
				cout<<" "<<cnt2;
			}
			cout<<endl;
			cnt1+=i;
		}
	}
	return 0;
}
