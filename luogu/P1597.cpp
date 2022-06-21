#include<iostream>
using namespace std;
string str,command; 
int a=0,b=0,c=0;
int main(){
	cin>>str;
	for(int i=0;i<=str.length();i++){
		if((str[i]=='a')||(str[i]=='b')||((str[i]=='c'))){
			while(str[i]!=';'){
				command.push_back(str[i]);
				i++;
			}
			//cout<<command<<endl;
			switch(command[0]){
				case 'a':
					switch(command[3]){
						case 'a':
							break;
						case 'b':
							a=b;
							break;
						case 'c':
							a=c;
							break;
						default:
							int len = command.length()-3;
							a=0;
							for(int i=len+1;i>1;i--){
								a+=(command[len+i]-48)*len;
								//cout<<">>> len="<<len<<endl; 
								//cout<<">>> a+="<<command[len+i]<<endl;
								//cout<<">>> a="<<a<<endl;
							}
							break; 
					}
					break;
				case 'b':
					switch(command[3]){
						case 'a':
							b=a;
							break;
						case 'b':
							break;
						case 'c':
							b=c;
							break;
						default:
							int len = command.length()-3;
							b=0;
							for(int i=len+1;i>1;i--){
								b+=(command[len+i]-48)*len;
							}
							break; 
					}
					break;
				case 'c':
					switch(command[3]){
						case 'a':
							c=a;
							break;
						case 'b':
							c=b;
							break;
						case 'c':
							break;
						default:
							int len = command.length()-3;
							c=0;
							for(int i=len+1;i>1;i--){
								c+=(command[len+i]-48)*len;
							}
							break; 
					}
					break;
			}
			command.clear();
		}
	}
	cout<<a<<' '<<b<<' '<<c<<endl;
	return 0;
}



