#include<iostream>
using namespace std;
main(){
	int k,n=1;
	double sn=0.0;
	cin>>k;
	while(sn<=k*1.0){
		sn+=1.0/n;
		n++;
    }
    n--;
	cout<<n;
	return 0;
}



