#include<iostream>
using namespace std;
int a[7],b[1000][7],c[7];
int main(){
	int n,points;
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		points=0;
		for(int j=0;j<7;j++){
			cin>>b[i][j];
			for(int k=0;k<7;k++){
				if(b[i][j]==a[k]){
					points++;
				}
			}
		}
		c[points]++;
	}
	for(int i=6;i>=0;i--){
		cout<<c[i]<<" ";
	}
	return 0;
}



