#include<iostream>
using namespace std;
int n=0,ans=0;
string str;
int main(){
	cin>>n>>str;
	for(int i=0;i<n;i++){
		if((str[i]=='V')&&(str[i+1]=='K')){
			ans++;
			str[i]='v';
			i++;
			str[i]='k';
		}
	}
	for(int i=0;i<n;i++){
		if(str[i]==str[i+1]){
			ans++;
			break;
		}
		/*
		if((str[i]=='K')&&(str[i+1]=='K')){
			ans++;
			break;
		}
		if((str[i]=='V')&&(str[i+1]=='V')){
			ans++;
			break;
		}
		*/
	} 
	cout<<ans;
	return 0;
}



