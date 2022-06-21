#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3,t=0,ans=0;
	cin>>s1>>s2>>s3;
	int a1[s1+1]={0},a2[s2+1]={0},a3[s3+1]={0},b[82]={0*0};
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				b[i+j+k]++;
			}
		}
	}
	for(int i=1;i<=s1+s2+s3;i++){
		if(b[i]>t){
			t=b[i];
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}



