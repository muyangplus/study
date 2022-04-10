#include<iostream>
using namespace std;
int main(){
	int n,o;
	cin>>n;
	for (int i=n;i>0;i--) {
		for (int j=0;j<i;j++) {
			o++;
			if (o<10) {
				cout<<"0"<<o;
			} else {
				cout<<o;
			}
		}
		cout<<endl;
	}
	return 0;
}




