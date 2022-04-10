#include<iostream>
using namespace std;

int main(){
	int a[8]={0}; 
	int n,points;
	cin>>n;
	for(int i=1;i<=7;i++){
		cin>>a[i];
	}
	int b[n+1][8];
	int c[8]={0};
	for(int i=1;i<=n;i++){
		points=0;
		for(int j=1;j<=7;j++){
			cin>>b[i][j];
			for(int k=1;k<=7;k++){
				if(b[i][j]==a[k]){
					points++;
				}
			}
		}
		c[points]++;
	}
	for(int i=7;i>0;i--){
		cout<<c[i]<<" ";
	}
	return 0;
}



