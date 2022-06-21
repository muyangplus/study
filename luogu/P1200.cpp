#include<iostream>
using namespace std;
string hx,dw;
int hx1=1,dw1=1;
int main(){
	cin>>hx>>dw;
	for(int i=0;i<hx.length();i++){
		hx1*=hx[i]-'A'+1;
	}
	hx1 %= 47;
	for(int i=0;i<dw.length();i++){
		dw1*=dw[i]-'A'+1;
	}
	dw1 %= 47;
	if(hx1==dw1){
		cout<<"GO"<<endl;
	}else{
		cout<<"STAY"<<endl;
	}
	return 0;
}



