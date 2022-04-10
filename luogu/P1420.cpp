#include<iostream>
using namespace std;

int main(){
	int n,x=1,y=1;
	cin>>n;
	int a[n-1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if((a[i]+1)==a[i+1]){
			x++;
		} else {
			x=1;
		}
		y=max(x,y);
	}
	cout<<y;
	return 0;
}



