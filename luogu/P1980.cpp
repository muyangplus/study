#include<iostream>
using namespace std;
int main(){
	int n,x,t;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int b=i;
		while(b!=0){
			if(b%10==x){
				t++;
			}
			b/=10;
		}
	}
	cout<<t;
	return 0;
}



