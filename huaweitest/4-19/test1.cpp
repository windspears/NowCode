#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1;
	//cin.getline(str1,5000);
	getline(cin,str1);
	int count=0,i=0;
	while(str1[i] != '\0'){
		if(str1[i] != ' '){count++;}
		else {count = 0;}	
		i++;	
	}
	cout<<count<<endl;
	return 0;
}
