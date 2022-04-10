#include<iostream> 
#include<cmath>
using namespace std;

void bubble_sort(int arr[],int len){
		int i,j;
		for (i = 0; i < len - 1; i++)
			for (j = 0; j < len - 1 - i; j++)
				if(arr[j] > arr[j + 1])
					swap(arr[j], arr[j + 1]);
}

int gcd(int a,int b){
	int yue;
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			yue=i;
			break;
		}
	}
	return a/yue;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int arr[]={a,b,c};
	bubble_sort(arr,3);
	cout<<gcd(arr[0],arr[2])<<"/"<<gcd(arr[2],arr[0]);
	return 0;
}



