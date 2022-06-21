#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n) {
	if (n==1){
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
	int n=0;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		for(int j=2;j<n;j++){
			if((prime(j))&&(prime(i-j))){
				cout<<i<<'='<<j<<'+'<<(i-j)<<endl;
				break;
			}
		}
	}
	return 0;
}



