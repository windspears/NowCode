#include <bits/stdc++.h>
using namespace std;

int main()
{
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
