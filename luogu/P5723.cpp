#include <iostream>
using namespace std;
int main(){
	bool flag = true;
	long long sum = 0;
	long long n;
	long long k = 0;
	long long a[100000];
	cin>>n;
	long long x=2;
	if(n==0||n==1){
    	cout << "0" << endl;
    	return 0;
	}
	while(sum<=n){
	    if(x==2){
	    	sum+=x;
	    	k++;
	    	a[k]=x;
		} else {
			flag=true;
	    	for(int j=2;j<x;j++){
	    	    if(x%j==0){
	    	    	flag=false;
				}
			}
			if(flag){
		    	sum+=x;
		    	k++;
		    	a[k]=x;
			}
		}
		x++;
	}
	for(int i=1;i<k;i++){
    	cout<<a[i]<<endl;
	}
	cout<<k-1<<endl;
	return 0;
}



