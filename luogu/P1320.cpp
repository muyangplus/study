#include<iostream>
#include<cmath>
using namespace std;
int n=0,t=0,ans[1000001];
char s,l='0';
int main(){
	while(cin>>s){
		n++;
		if(s==l){
			ans[t]++;
		}else{
			ans[++t]++;
			l=s;
		}
	}
	cout<<sqrt(n);
	for(int i=0;i<=t;i++){
		cout<<" "<<ans[i];
	}
	return 0;
}



