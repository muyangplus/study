#include<iostream>
using namespace std;
int main(){
	int n=0;
	string name; 
	int age,point;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>age>>point;
		age++;
		point*=1.2;
		if(point>600){
			point=600;
		}
		cout<<name<<' '<<age<<' '<<point<<endl;
	}
	return 0;
}



