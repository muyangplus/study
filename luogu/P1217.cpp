#include<iostream>
#include<cmath> 
using namespace std;
int palindrome = 0;
int d1=0,d2=0,d3=0,d4=0;
bool is_prime(unsigned long long n) { //quick
	unsigned long long stop = n / 6 + 1, Tstop = sqrt(n) + 5;
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11) {
		return 1;
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n == 1) {
		return 0;
	}
	for (unsigned long long i = 1; i <= stop; i++) {
		if (i * 6 >= Tstop) {break;}
		if ((n % (i * 6 + 1) == 0) || (n % (i * 6 + 5) == 0)) {
			return 0;
		}
	}
	return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	
	// 1
	for (d1 = 1; d1 <= 9; d1+=2){			// 只有奇数才会是素数
		palindrome=d1;
		if (palindrome>=a){
			if (palindrome>b){
				return 0;
			}
			if (is_prime(palindrome)){
				cout<<palindrome<<endl;
			}
		}

	} 
	// 2
	for (d1 = 1; d1 <= 9; d1+=2){
		palindrome=d1*10 + d1;
		if (palindrome>=a){
			if (palindrome>b){
				return 0;
			}
			if (is_prime(palindrome)){
				cout<<palindrome<<endl;
			}
		}
	} 
	// 3
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
			palindrome = 100*d1 + 10*d2 + d1;
			if (palindrome>=a){
				if (palindrome>b){
					return 0;
				}
				if (is_prime(palindrome)){
					cout<<palindrome<<endl;
				}
			}
     	}
 	}
 	// 4
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
			palindrome = 1000*d1 + 100*d2 + 10*d2 + d1;
			if (palindrome>=a){
				if (palindrome>b){
					return 0;
				}
				if (is_prime(palindrome)){
				cout<<palindrome<<endl;
				}
			}
     	}
 	}
	// 5
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
    		for (d3 = 0; d3 <= 9; d3++) {
				palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;
				if (palindrome>=a){
					if (palindrome>b){
						return 0;
					}
					if (is_prime(palindrome)){
					cout<<palindrome<<endl;
					}
				}
         	}
     	}
 	}
 	// 6
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
    		for (d3 = 0; d3 <= 9; d3++) {
				palindrome = 100000*d1 + 10000*d2 + 1000*d3 +100*d3 + 10*d2 + d1;
				if (palindrome>=a){
					if (palindrome>b){
						return 0;
					}
					if (is_prime(palindrome)){
					cout<<palindrome<<endl;
					}
				}
         	}
     	}
 	}
	//7
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
    		for (d3 = 0; d3 <= 9; d3++) {
    			for (d4 = 0; d4 <= 9; d4++) {
					palindrome = 1000000*d1 + 100000*d2 + 10000*d3 + 1000*d4 +100*d3 + 10*d2 + d1;
					if (palindrome>=a){
						if (palindrome>b){
							return 0;
						}
						if (is_prime(palindrome)){
							cout<<palindrome<<endl;
						}
					}
				}
         	}
     	}
 	}
	//8
	for (d1 = 1; d1 <= 9; d1+=2) {
    	for (d2 = 0; d2 <= 9; d2++) {
    		for (d3 = 0; d3 <= 9; d3++) {
    			for (d4 = 0; d4 <= 9; d4++) {
					palindrome = 10000000*d1 + 1000000*d2 + 100000*d3 + 10000*d4 + 1000*d4 +100*d3 + 10*d2 + d1;
					if (palindrome>=a){
						if (palindrome>b){
							return 0;
						}
						if (is_prime(palindrome)){
							cout<<palindrome<<endl;
						}
					}
				}
         	}
     	}
 	}
	return 0;
}



