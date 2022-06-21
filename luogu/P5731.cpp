#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,num=1,x=0,y=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			a[j][i]=0;
		}
	}
	for(int i=0;i<=n/2+1;i++){
		//cout<<x<<"<"<<n-1<<","<<a[x+1][y]<<endl;
		while(x<n-1&&a[x+1][y]==0){
			//cout<<"> x="<<x<<",y="<<y<<endl; 
			a[x][y]=num;
			num++;
			x++;
		}
		//cout<<"y="<<y<<",a="<<a[x][y+2]<<endl;
		while(y<n-1&&a[x][y+1]==0){
			//cout<<"v x="<<x<<",y="<<y<<endl; 
			a[x][y]=num;
			num++;
			y++;
		}
		while(x>0&&a[x-1][y]==0){
			//cout<<"< x="<<x<<",y="<<y<<endl; 
			a[x][y]=num;
			num++;
			x--;
		}
		while(y>0&&a[x][y-1]==0){
			//cout<<"| x="<<x<<",y="<<y<<endl; 
			a[x][y]=num;
			num++;
			y--;
		}
	}
	a[x][y]=num; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(3)<<a[j][i];
		}
		cout<<endl;
	}
	return 0;
}



