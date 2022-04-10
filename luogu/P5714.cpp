#include<iostream>
using namespace std;
int main(){
	float m,h;
	cin>>m>>h;
	float BMI=1.0*m/(h*h);
	if (BMI<18.5){
		cout<<"Underweight";
	} else if (BMI < 24) {
		cout<<"Normal";
	} else {
		cout<<BMI<<endl<<"Overweight"; 
	}
	return 0;
}



