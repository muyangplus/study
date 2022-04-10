#include<iostream>
using namespace std;
int n,i,a[10000];
int main(){
    cin>>n;
    while(n!=1){
		a[i]=n;
		i++;
		if(n%2==0){
			n/=2;
		}else{
			n=3*n+1;
		}
	}
	a[i]=1;
	for(int j=i;j>=0;j--){
		cout<<a[j]<<' ';
	}
	return 0;
}



