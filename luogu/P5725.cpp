//#include<bits\stdc++.h> 
#include<iostream>
using namespace std;

void fillOut(int i){
	if (i<10) {
		cout<<"0"<<i;
	} else {
		cout<<i;
	}
} 

int main(){
	int n,o=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			o++;
			fillOut(o);
		}
		cout<<endl;
	}
	o=0;
	for(int i=0;i<=n;i++){
		for(int k=0;k<n-i;k++){
			cout<<"  ";
		}
		for(int j=0;j<i;j++){
			o++;
			fillOut(o);
		}
		cout<<endl;
	}
	return 0;
}



