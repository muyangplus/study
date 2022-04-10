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
		//�������һ��������
		cout<<"Not triangle"<<endl;
		return 0;
	}
	if ((arr[1]*arr[1]+arr[2]*arr[2])==(arr[0]*arr[0])) {
		//ֱ��������
		cout<<"Right triangle"<<endl;
	} else if ((arr[1]*arr[1]+arr[2]*arr[2])>(arr[0]*arr[0])) {
		//���������
		cout<<"Acute triangle"<<endl;
	} else if ((arr[1]*arr[1]+arr[2]*arr[2])<(arr[0]*arr[0])) {
		//�۽�������
		cout<<"Obtuse triangle"<<endl;
	}
	//����������
	if ((arr[0]==arr[1])||(arr[1]==arr[2])) {
		cout<<"Isosceles triangle"<<endl;
	}
	//�ȱ�������
	if ((arr[0]==arr[1])&&(arr[1]==arr[2])) {
		cout<<"Equilateral triangle"<<endl;
	}
	return 0;
}



