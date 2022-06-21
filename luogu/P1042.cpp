#include<iostream>
using namespace std;
char input[2502],temp;
int top=0,w=0,l=0; 
int abs(int num){
	//cout<<">>> "<<num<<endl; 
	if(num>=0){
		return num;
	}else{
		return -num;
	}
}
int main(){
	while(1){
		cin>>temp;
		if (temp!='E'){
			input[top]=temp;
			top++;
		}else{
			break;
		}
	}
	if(top==0){
		cout<<"0:0"<<endl<<endl<<"0:0"<<endl;
		return 0;
	}
	int id=0;
	//cout<<">>> "<<top<<endl; 
	for(int i=0;i<top;i++){
		if(input[i]=='W'){
			w++;
		}else if(input[i]=='L'){
			l++;
		}
		//cout<<">>> i="<<i<<",input="<<input[i]<<endl; 
		if(((w>=11)||(l>=11))&&(abs(w-l)>=2)){
			id++;
			cout<<id<<" "<<w<<':'<<l<<endl;
			w=0;
			l=0;
		}
	}
	if((w!=0)||(l!=0)){
		cout<<w<<':'<<l<<endl;
	}
	cout<<endl;
	w=0;
	l=0;
	for(int i=0;i<top;i++){
		if(input[i]=='W'){
			w++;
		}else if(input[i]=='L'){
			l++;
		}
		//cout<<">>> i="<<i<<",input="<<input[i]<<endl; 
		if(((w>=21)||(l>=21))&&(abs(w-l)>=2)){
			cout<<w<<':'<<l<<endl;
			w=0;
			l=0;
		}
		//cout<<input[i]<<endl;	
	}
	if((w!=0)||(l!=0)){
		cout<<w<<':'<<l<<endl;
	}
	cout<<endl;
	return 0;
}



