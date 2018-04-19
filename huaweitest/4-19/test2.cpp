#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	char a;
	//cin.getline(str1,5000);
	getline(cin,str1);
	cin>>a;
	int len = str1.length();
	int count=0, i=0;
	while(i<len){
		if(str1[i] == a){count++;}
		//else {count = 0;}	
		i++;	
	}
	cout<<count<<endl;
	return 0;
}
