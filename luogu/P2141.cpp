#include<iostream>
using namespace std;
void bubble_sort(int arr[],int len){
	for (int i = 0; i < len - 1; i++){
		for (int j = 0; j < len - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main(){
	int n,ans=0;
	cin>>n;
	int a[n],b[n],t=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	bubble_sort(a,n);
	b[0]=a[0];
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			b[t]=a[i];
			t++;
		}
	} 
	cout<<"整理后的数组：";
	for(int i;i<t;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			for(int k=j;k<t;k++){
				if(b[i]+b[j]==b[k]){
					cout<<"i="<<b[i]<<",j="<<b[j]<<",k="<<b[k]<<"->equl"<<endl;
					ans++;
					break;
				}else{
					cout<<"i="<<b[i]<<",j="<<b[j]<<",k="<<b[k]<<endl;
				}
			}
		} 
	} 
	cout<<ans;
	return 0;
}



