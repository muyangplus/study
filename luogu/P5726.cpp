#include<iostream>
#include<iomanip>
using namespace std;

void bubble_sort(int arr[],int len){
	int i,j;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if(arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int main(){
	int n;
	double sum;
	cin>>n;
	int a[n-1];
	for (int i=0;i<n;i++){
		cin>>a[i];
	} 
	bubble_sort(a,n);
	for (int i=1;i<n-1;i++){
		sum+=a[i];
	} 
	cout<<fixed<<setprecision(2)<<sum/(n-2);
	return 0;
}



