#include<iostream>
#include<cmath>
using namespace std;
int n=0,top=0;
bool is_prime(unsigned long long n) { //unknow
	if (n==1) {
		return false;
	}
	long long stop = n / 6 + 1, Tstop = sqrt(n) + 5;
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11) {
		return true;
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
		return false;
	}
	for (int i = 1; i <= stop; i++) {
		if (i * 6 >= Tstop) {break;}
		//cout << i*6+1 << "  " << i*6+5 << endl;
		if ((n % (i * 6 + 1) == 0) || (n % (i * 6 + 5) == 0)) {
			return false;
		}
	}
	return true;
}
int main(){
	cin>>n;
	int num[n],prime[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
		if(is_prime(num[i])){
			prime[top++]=num[i];
		}
	}
	for(int i=0;i<top;i++){
		cout<<prime[i]<<' ';
	}
	return 0;
}



