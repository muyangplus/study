#include<iostream>
using namespace std;

void bubble_sort(int arr[],int len) {
	for (int i=0;i<len;i++) {
		for (int j=0;j<len-1;j++) {
			if (arr[j]<arr[j+1]) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int a=0,b=0,c=0;
	cin>>a>>b>>c;
	int arr[]={a,b,c};
	bubble_sort(arr,3);
	
	if (((arr[1]+arr[2])<=arr[0])||(arr[2]==0)) {
		//不能组成一个三角形
		cout<<"Not triangle"<<endl;
		return 0;
	}
	if ((arr[1]*arr[1]+arr[2]*arr[2])==(arr[0]*arr[0])) {
		//直角三角形
		cout<<"Right triangle"<<endl;
	} else if ((arr[1]*arr[1]+arr[2]*arr[2])>(arr[0]*arr[0])) {
		//锐角三角形
		cout<<"Acute triangle"<<endl;
	} else if ((arr[1]*arr[1]+arr[2]*arr[2])<(arr[0]*arr[0])) {
		//钝角三角形
		cout<<"Obtuse triangle"<<endl;
	}
	//等腰三角形
	if ((arr[0]==arr[1])||(arr[1]==arr[2])) {
		cout<<"Isosceles triangle"<<endl;
	}
	//等边三角形
	if ((arr[0]==arr[1])&&(arr[1]==arr[2])) {
		cout<<"Equilateral triangle"<<endl;
	}
	return 0;
}



