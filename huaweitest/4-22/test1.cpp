#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	map<int,int> coll;
	cin>>n;
	while(n--)
	{
		int key,value;
		cin>>key>>value;
		coll[key]+=value;
	}
	//for(map<int,int>::iterator it=coll.begin();it!=coll.end();++it)
	for(auto &val : coll)	
	{
		cout << val.first << " " << val.second << endl;
	}
	return 0;
}
