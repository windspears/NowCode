#include <bits/stdc++.h>
using namespace std;
int calIncSub(vector<int> queue,vector<int> &Num)
{
	for(int i=1;i<queue.size();i++)
		for(int j=i-1;j>=0;j--)
		{
			if(queue[j]<queue[i] && Num[i]<Num[j]+1)
				Num[i]=Num[j]+1;
		}
	return 0;
}
int main()
{
	
	int n,num;
	cin>>n;
	vector<int> queue;
	vector<int> incNum(n,1);
	vector<int> decNum(n,1);
	for(int i=0;i<n;i++)
	{
		cin>>num;
		queue.push_back(num);
	}
	calIncSub(queue,incNum);
	reverse(queue.begin(),queue.end());
	calIncSub(queue,decNum);
	reverse(decNum.begin(),decNum.end());
	int max=0;
	for(int i=0;i<n;i++)
		if(incNum[i]+decNum[i]>max)
		{
			max = incNum[i]+decNum[i];
		}
	cout<<n-max+1<<endl;
	return 0;
}
