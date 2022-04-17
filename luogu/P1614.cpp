#include<iostream>
using namespace std;
int main(){
	int n,m,t,sum=300000;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	for(int i=0;i<n-2;i++){
		t=0;
		for(int j=i;j<i+m;j++){
			t+=a[j];
		}
		sum=min(sum,t);
	} 
	cout<<sum;
	return 0;
}



