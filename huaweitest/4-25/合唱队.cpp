#include <bits/stdc++.h>
using namespace std;
void calIncSub(vector<int> queue,vector<int> &Num)
{
	for(int i=1;i<queue.size();i++)
		for(int j=i-1;j>=0;j--)
			if(queue[j]<queue[i] && Num[i]<Num[j]+1)
				Num[i]=Num[j]+1;
}
int main()
{//1.先求数组从左到右每个成员的最大递增l[a[i]]；
 //2.再求从右到左数组成员的最大递增r[a[i]]；
 //3.每个成员的递增之和-1，即是队列总长度；
 //4：n-总长度，即为取出人数
		
	int n,num;
	while(cin>>n)
	{
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
	}
	return 0;
}
