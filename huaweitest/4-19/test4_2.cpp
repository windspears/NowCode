#include <bits/stdc++.h>
using namespace std;
void splitchar(string str){
	if(str == "")return ;
	if(str.size() <= 8){
		str.append(8-str.size(),'0');
		cout<<str<<endl;	
		return;
	}
	cout<<str.substr(0,8)<<endl;
	splitchar(str.substr(8,str.size()));
}
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	splitchar(s1);
	splitchar(s2);
	return 0;
}
