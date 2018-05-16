#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> numberOfLines(vector<int>& widths,string S)
	{
		int count=0,sum=0,sum1=0;
		
		for(int i=0;i<S.size();i++)
		{
			sum1+=widths[S[i]-'0'];
			if(sum<=100&&sum1<=100)
			{		
				sum =sum1;
			}
			else if(sum<=100&&sum1>100)
			{
				sum1-=sum;sum=0;count++;
			}
		}
		vector<int >res;
		res.push_back(count);
		res.push_back(sum1);
		return res;
	}
};

int main()
{
	int widths[26];
	string S;
	for(int i=0;i<26;i++)
	{
		cin>>widths[i];
	}
	cin>>S;
	vector<int> ret = Solution().numberOfLines(widths,S);
	cout<<ret[0]<<" "<<ret[1]<<endl;
	return 0;
}
