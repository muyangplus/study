#include<iostream>
using namespace std;
int n;
int id,p1,p2;
string exc(int p1,int p2){
	double p3=0.7*p1+0.3*p2;
	if(((p1+p2)>140)&&(p3>=80)){
		return "Excellent";
	}else{
		return "Not excellent";
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id>>p1>>p2;
		cout<<exc(p1,p2)<<endl;
	}
	return 0;
}



