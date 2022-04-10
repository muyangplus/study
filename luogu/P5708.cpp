#include<iostream> 
#include<cstdio>
#include<cmath> 
using namespace std;
int main(){
	double a=0,b=0,c=0;
	cin>>a>>b>>c;
	double p=0.5*(a+b+c);
	double ans=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%0.1f\n",ans);
	return 0;
}



