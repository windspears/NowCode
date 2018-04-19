#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int len1 = s1.length();
	int len2 = s2.length();
	int count1 = 0,count2=0;
	if(s1=="") return 0;
	if(s2=="") return 0;
	for(int i=0;i<len1;i++){
		if(count1 == 8){
			cout<<endl;
			count1=0;
		}
		cout<<s1[i];
		count1++;
	}
	while(count1>0&&count1<8){
		cout<<0;
		count1++;
	} 
	cout<<endl;
	for(int i=0;i<len2;i++){
		if(count2 == 8){
			cout<<endl;
			count2=0;
		}
		cout<<s2[i];
		count2++;
	}
	while(count2>0&&count2<8){
		cout<<0;
		count2++;
	} 
	return 0;
}
