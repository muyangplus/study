#include<iostream>
using namespace std;
int n;
int abs(int num){
	if(num>=0){
		return num;
	}else{
		return -num;
	}
}
int main(){
	cin>>n;
	char name[n][9];
	int p[n][4];
	for(int i=0;i<n;i++){
		cin>>name[i]>>p[i][1]>>p[i][2]>>p[i][3];
		p[i][0]=p[i][1]+p[i][2]+p[i][3];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((abs(p[i][0]-p[j][0])<=10)
			 &&(abs(p[i][1]-p[j][1])<=5)
			 &&(abs(p[i][2]-p[j][2])<=5)
			 &&(abs(p[i][3]-p[j][3])<=5)){
			 	cout<<name[i]<<' '<<name[j]<<endl;
			 }
		}
	}
	return 0;
}



