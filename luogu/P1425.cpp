#include<iostream> 
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int m=(c-a)*60+(d-b);
	cout<<m/60<<" "<<m-m/60*60;
	return 0;
}



