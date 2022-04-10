#include<iostream>
using namespace std;
int main(){
	int a,t;
	cin>>a;
	while (a>=1) {
		a/=2;
		t++;
	}
	cout<<t; 
	return 0;
}



