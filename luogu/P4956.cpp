#include<iostream>
using namespace std;
int main(){
	int n,x,k;
	cin>>n;
	for(int i=1;i<=100;i++)
	{
		for(int j=100;j>=1;j--)
		{
			if(i*7+j*21==n/52)
			{
				x=i;
				k=j;
			}
		}
	}
	cout<<x<<endl<<k<<endl;
	return 0;
}



