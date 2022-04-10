#include<iostream> 
using namespace std;

void bubble_sort(int arr[],int len) {
	for (int i=0;i<len;i++) {
		for (int j=0;j<len-1;j++) {
			if (arr[j]>arr[j-1]) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	bubble_sort(arr,n);
	cout<<arr[0]<<endl;
	return 0;
}


