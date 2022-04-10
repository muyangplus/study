#include <iostream>
using namespace std; 
int n;
int main(){
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		a[i][0]=1;
		a[i][i]=1; 
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<i;j++)
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++)
		cout <<a[i][j]<<" ";
		cout <<endl;
	}
}



