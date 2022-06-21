#include<iostream>
using namespace std;
int n=0,ans=1;
void jc(int n){
	if(n==1){
		return;
	}
	ans*=n;
	jc(n-1);
}
int main(){
	cin>>n;
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	jc(n);
	cout<<ans<<endl;
	return 0;
}



