#include<iostream>
using namespace std;
string str;
int times[26],maxx=0; 
int main(){
	for(int i=0;i<4;i++){
		getline(cin,str);
		for(int j=0;j<str.length();j++){
			if(!((str[j]>='A')&&(str[j]<='Z'))){
				continue; 
			}
			times[str[j]-'A']++;
		}
	}
	for(int i=0;i<26;i++){
		//cout<<times[i]<<' ';
		if(times[i]>maxx){
			maxx=times[i];
		}
	}
	//cout<<maxx<<endl;
	for(int i=maxx;i>0;i--){
		for(int j=0;j<26;j++){
			if(times[j]==i){
				cout<<'*';
				times[j]--;
			}else{
				cout<<' ';
			}
			cout<<' ';
		}
		cout<<endl;
	}
	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
	return 0;
}



