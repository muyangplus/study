#include<iostream>
using namespace std;
int x=0,y=0,ans=0,top=0;;
bool is_leap(int year){
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>x>>y;
	int year[y-x];
	for(int i=x;i<=y;i++){
		if(is_leap(i)){
			ans++;
			year[top++]=i;
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<top;i++){
		cout<<year[i]<<' ';
	}
	return 0;
}



