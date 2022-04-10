#include<iostream> 
using namespace std;
int main(){
	int y=0;
	cin>>y;
	cout<<((y%4==0&&y%100!=0)||(y%400==0));
	return 0;
}



