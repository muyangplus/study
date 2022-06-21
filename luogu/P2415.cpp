#include<iostream>
#include<cmath>
using namespace std;
int a[31],top=0;
long long int s;
int main(){
	while(cin>>a[top++]);
	for(int i=0;i<top;i++){
		s+=a[i];
	}
	s*=pow(2,top-2);
	cout<<s;
	return 0;
}



