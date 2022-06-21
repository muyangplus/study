#include<iostream>
#include<cstring>
using namespace std;
int len(int number){
	int x=0;
	if(number==0)
		return 1;
	if(number>0)
		while(number){
			number/=10;
			x++;
		}
	if(number<0){
		x=1;
		number=-number;
		while(number){
			number/=10;
			x++;
		}
	}
	return x;
}
int main(){
	int n,a,b,sum;
	string c;
	char lastc;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		switch(c[0]){
			case 'a':
				cin>>a>>b;
				sum=a+b;
				cout<<a<<"+"<<b<<"="<<sum<<endl;
				lastc=c[0];
				break;
			case 'b':
				cin>>a>>b;
				sum=a-b;
				cout<<a<<"-"<<b<<"="<<sum<<endl;
				lastc=c[0];
				break;
			case 'c':
				cin>>a>>b;
				sum=a*b;
				cout<<a<<"*"<<b<<"="<<sum<<endl;
				lastc=c[0];
				break;
			default:
				cin>>b;
				a=0;
				int l=c.size();
				for(int i=0;i<l;++i){
					a=a*10+c[i]-'0';
				}
				switch(lastc)	{
					case 'a':
						sum=a+b;
						cout<<a<<"+"<<b<<"="<<sum<<endl;
						break;
					case 'b':
						sum=a-b;
						cout<<a<<"-"<<b<<"="<<sum<<endl;
						break;
					case 'c':
						sum=a*b;
						cout<<a<<"*"<<b<<"="<<sum<<endl;
						break;
					default:
						break;
				}	
				break;
		}
		cout<<len(a)+len(b)+len(sum)+2<<endl;
	}
	return 0;
}
