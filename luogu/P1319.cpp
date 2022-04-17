#include<iostream>
using namespace std;
int main(){
	int n,s,t=0;
	bool key;
	cin>>n;
	int a[n*n];
	while(cin>>s){
		for(int i=0;i<s;i++){
			a[t++]=key;
		}
		key=!key;
	}
	t=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[t++];
		}
		cout<<endl;
	}
	return 0;
}



