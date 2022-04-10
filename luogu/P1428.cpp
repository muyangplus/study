#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;				//Ë³´ø³õÊ¼»¯ 
	}
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i]){
				b[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}



