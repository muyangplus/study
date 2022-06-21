#include<iostream>
using namespace std;
int boy,girl; 
string str;
char last; 
int main(){
	cin>>str;
	for(int i=0;i<str.length();i++){
		if((str[i]=='b')||(str[i]=='o')||(str[i]=='y')){
			boy++;
		}
		if((str[i]=='g')||(str[i]=='i')||(str[i]=='r')||(str[i]=='l')){
			girl++;
		}
		if(((last=='b')&&(str[i]=='o'))
		 ||((last=='o')&&(str[i]=='y'))){
		 	boy--; 
		}
		if(((last=='g')&&(str[i]=='i'))
		 ||((last=='i')&&(str[i]=='r'))
		 ||((last=='r')&&(str[i]=='l'))){
		 	girl--; 
		}
		last=str[i];
	}
	cout<<boy<<endl<<girl<<endl;
	return 0;
}



