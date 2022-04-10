#include<iostream> 
using namespace std;
int main(){
	int n=0,a=0,b=0,s=0,t=2147483647;
	cin>>n;
	for (int i=0;i<3;i++) {
		cin>>a>>b;
		if (n%a==0) {
			s=n/a*b;
		} else {
			s=(n/a+1)*b;
		}
		t=min(s,t);
	}
	cout<<t;
	return 0;
}



