#include<iostream>
using namespace std;
int a[2001],b[2001],c[2001];
int init(int a[]){
	string str;
	cin>>str;
	int len=str.length();
	for(int i=0;i<=len;i++){
		a[i]=str[len-i]-'0';
	}
	return len;
}
void out(int a[],int len){
	for(int i=len;i>0;i--){
		cout<<c[i];
	}
}
int add(int a[],int b[],int lena,int lenb){
	int i=1,x=0;
	while((i<=lena)||(i<=lenb)){
		c[i]=a[i]+b[i]+x;
		x=c[i]/10;
		c[i]%=10;
		i++;
	}
	c[i]=x;
	if(c[i]==0){
		i--;
	}
	return i; 
}
int main(){
	int lena = init(a);
	int lenb = init(b);
	int lenc = add(a,b,lena,lenb);
	out(c,lenc);
	return 0;
}



