#include<iostream>
using namespace std;
int main(){
	double x,s,t=2.0;
	int b;
	cin>>x;
	while(s<x){
		s+=t;
		t*=0.98;
		b++;
	}
	cout<<b;
	return 0;
}



