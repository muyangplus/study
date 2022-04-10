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
int n[3];
char a,b,c;
int main(){
	cin>>n[0]>>n[1]>>n[2];
	cin>>a>>b>>c;
	bubble_sort(n,3);
	cout<<n[a-65]<<" "<<n[b-65]<<" "<<n[c-65];
    return 0;
}



