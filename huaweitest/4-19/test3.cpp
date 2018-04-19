#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,n;
	while(cin>>N){
		int a[1001] ={0};
		while(N--){
			cin>>n;
			a[n] = 1;
		}	
		for(int i=0;i<1001;i++)
			if(a[i])
				cout<<i<<endl;
	}
	return 0;
	/*cin>>N;
	int arr1[N];
	for(int i=0;i<N;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<i;j++){
			if(arr1[j] ==arr1[i]){
				arr1[i]= arr1[i+1];N--;
			}	
		}	
	}
	sort(arr1,arr1+N);
	for(int i=0;i<N;i++){
		cout<<arr1[i]<<endl;	
	}
	return 0;*/
}
