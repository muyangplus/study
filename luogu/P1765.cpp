#include<iostream>
using namespace std;
string str;
int times=0;
const char c1[8] = {'a','d','g','j','m','p','t','w'};
const char c2[8] = {'b','e','h','k','n','q','u','x'};
const char c3[8] = {'c','f','i','l','o','r','v','y'};
const char c4[2] = {'s','z'};

int main(){
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			times++;
			continue;
		}
		for(int j=0;j<8;j++){
			//cout<<i<<" "<<j<<" "<<str[i]<<" "<<c1[j]<<endl;
			if(str[i]==c1[j]){
				times++;
			}else if(str[i]==c2[j]){
				times+=2;
			}else if(str[i]==c3[j]){
				times+=3;
			}
			/*
			switch(str[i]){
				case c1[j]: 
					times++;
					break;
				case c2[j]:
					times+=2;
					break;
				case c3[j]:
					times+=3;
					break;
			}
			*/ 
		}
		for(int j=0;j<2;j++){
			if(str[i]==c4[j]) times+=4;
		}
	} 
	cout<<times<<endl;
	return 0;
}



