#include<iostream> 
using namespace std;

void bubble_sort(int x[],int len){
	for (int i=0;i<len;i++){
		for (int j=0;j<len-1;j++){
			if (x[j]>x[j+1]){
				swap(x[j],x[j+1]);
			}
		}
	}
}

int main(){
	int a=0,b=0,c=0;
	cin>>a>>b>>c;
	int x[] = { a, b, c};
	int len = (int) sizeof(x) / sizeof(*x);
	bubble_sort(x,len);
	for (int i=0;i<len;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}



