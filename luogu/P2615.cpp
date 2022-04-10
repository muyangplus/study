#include<iostream>
using namespace std;
int x,y; 
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(int i=1;i<=n*n;i++){
		if(i==1){
			//cout<<"#0";
			x=n/2;
			y=0;
		}else if(y==0&&x!=n-1){
			//cout<<"#1";
			x++;
			y=n-1;
		}else if(x==n-1&&y!=0){
			//cout<<"#2";
			x=0;
			y--;
		}else if(x==n-1&&y==0){
			//cout<<"#3";
			y++;
		}else if(y!=0&&x!=n-1){
			//cout<<"#4";
			if(a[x+1][y-1]==0){
				//cout<<"-1";
				x++;
				y--;
			}else{
				//cout<<"-2";
				y++;
			}
		}
		a[x][y]=i;
		//cout<<",x="<<x<<",y="<<y<<"ÒÑ±»Ìî³äÎª"<<i<<endl; 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}



