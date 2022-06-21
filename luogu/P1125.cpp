#include<iostream>
#include<cstring>
using namespace std;
bool prime(int x){
	if(x==0||x==1){
		return 0;
	}
	if(x==2){
		return 1;
	}
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	string a;
	int sum[26]={0},maxn=0,minn=100;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]>='a'&&a[i]<='z'){
			sum[a[i]-97]++;
		}else{
			sum[a[i]-65]++;
		}
	}
	for(int i=0;i<26;i++){
		if(sum[i]>maxn){
			maxn=sum[i];
		}
		if(sum[i]>0&&sum[i]<minn){
			minn=sum[i];
		}
	}
	if(prime(maxn-minn)){
		cout<<"Lucky Word"<<endl<<(maxn-minn);
	}else{
		cout<<"No Answer"<<endl<<0;
	}
	return 0;
}



