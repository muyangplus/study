#include<iostream>
using namespace std;
int main(){
	int n=0,ans=1;
	cin>>n;
	for(int i=1;i<n;i++){
		ans++;
		ans*=2;
	} 
	cout<<ans<<endl;
	return 0;
}



