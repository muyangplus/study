#include<string>
#include<iostream> 
using namespace std;

int main(){
	int s=0,v=0,t=0,h=0,m=0;
	cin>>s>>v;
	if (s%v==0) {
		t=s/v;
	} else {
		t=s/v+1;
	}
	t+=10;
	h=t/60;
	m=t%60;
	if (m==0) {
		h=8-h;
	} else {
		h=7-h;
		m=60-m;
	}
	if (h<0) {
		h+=24;
	}
	if (h<10) {
		cout<<"0"<<h;
	} else {
		cout<<h;
	}
	cout<<":";
	if (m<10) {
		cout<<"0"<<m;
	} else {
		cout<<m;
	}
	return 0;
}



