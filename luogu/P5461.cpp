#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<(1<<n);j++){
			cout<<((i|j)!=((1<<n)-1)?0:1)<<' ';
		}
		//(i|j)				��i==jʱ,����=0;����=1 
		//(1<<n)			2��n���� (1<<n)
		cout<<endl;
	}
	return 0;
}



