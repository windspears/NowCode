#include <bits/stdc++.h>
using namespace std;

int main(void){
	long num;
	while(cin>>num){
		while(num != 1){
			for(int i=2;i<=num;i++){
				if(num % i == 0){
					num/=i;
					cout<<i<<' ';
					break;
				}
			}
		}
	}
	return 0;
}
