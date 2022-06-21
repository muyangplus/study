#include<iostream>
#include<cstring>
using namespace std;
string a; 
int main(){
	int n;
	cin>>n>>a;
	for(int i=0;i<=a.length();i++){
		if(a[i]+n>122){
			a[i]+=n-26;
		}else{
			a[i]+=n;
		}
	}
	cout<<a;
	return 0;
}


