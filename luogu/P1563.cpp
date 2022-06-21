#include<iostream>
using namespace std;
int n,m;
int a,s;
int t=0;
int main(){
	cin>>n>>m;
	int dir[n+2]; 
	char name[n+2][100];
	for(int i=0;i<n;i++){
		cin>>dir[i]>>name[i];
	}
	for(int i=0;i<m;i++){
		cin>>a>>s;
		// a=0,d=0 - l
		// a=1,d=0 - 0
		// a=0,d=1 - 0
		// a=1,d=1 - 1
		//cout<<">>> persion="<<name[t]<<",dir="<<(a!=(dir[t]==0))<<endl; 
		if(a==(dir[t]!=0)){
			if((t-s)<0){
				t+=n;
			}
			t-=s;
		}else{
			if((t+s)>n){
				t-=n;
			}
			t+=s;
		}
	}
	cout<<name[t]<<endl;
	return 0;
}



