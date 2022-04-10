#include<iostream>
using namespace std;
int main(){
	int k,s,c,t;
	cin>>k;
	c=t=1;
	for(int i=1;i<=k;i++){
		s+=c;
		t--;
		if(t==0){
			c++;
			t=c;
		}
	}
	cout<<s;
	return 0;
}



