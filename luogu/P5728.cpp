#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		d[i]=a[i]+b[i]+c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((max(a[i],a[j])-min(a[i],a[j])<=5)&&(max(b[i],b[j])-min(b[i],b[j])<=5)&&(max(c[i],c[j])-min(c[i],c[j])<=5)&&(max(d[i],d[j])-min(d[i],d[j]))<=10){
				sum+=1;
			}
		}
	}
	cout<<sum;
	return 0;
}



