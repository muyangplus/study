#include<iostream>
#include<string>
using namespace std;
string a1,b1;
int a[50001],b[50001],i,x,len,j,c[50001];
int main (){
    cin>>a1>>b1;
    a[0]=a1.length();
	b[0]=b1.length();
    for(i=1;i<=a[0];++i)a[i]=a1[a[0]-i]-'0';//将字符串转换成数字
    for(i=1;i<=b[0];++i)b[i]=b1[b[0]-i]-'0';
    for(i=1;i<=a[0];++i)for (j=1;j<=b[0];++j)c[i+j-1]+=a[i]*b[j];//按乘法
    len=a[0]+b[0];                                       //原理进行高精乘
    for(i=1;i<len;++i)if (c[i]>9){c[i+1]+=c[i]/10;c[i]%=10;}//进位
    while(c[len]==0&&len>1)len--;//判断位数
    for(i=len;i>=1;--i)cout <<c[i];//输出
    return 0;
}



/*
#include<iostream>
#include<string>
using namespace std;
int a[50001],b[50001],c[50001];
int init(int a[]){
	string s;
	cin>>s;
	int len = s.length();
	for(int i=0;i<len;i++){
		a[i]=s[len-i]-'0';
	}
	return len;
}
void out(int a[],int len){
	for(int i=len;i>0;i++){
		cout<<a[i];
	}
}
int times(int a[],int b[],int lena,int lenb){
	for(int i=0;i<lena;i++){
		for(int j=0;j<lenb;j++){
			c[i+j-1]+=a[i]*b[j];
		}
	}
	int len = lena + lenb;
	for(int i=0;i<len;i++){
		if (c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
	while(c[len]==0&&len>1){
		len--;
	}
	return len;
}
int main (){
    int lena = init(a);
    int lenb = init(b);
    int lenc = times(a,b,lena,lenb);
    out(c,lenc);
    return 0;
}
*/




