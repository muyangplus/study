#include<iostream>
using namespace std;
int hb[25]={0,0,1,0,0,0,1,1,1,0,1,1,1,1,1,0,1,1,1,0,0,0,1,0,0};
int main(){
	int n,m,k,x,y,t=0,ans=0;
	cin>>n>>m>>k;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<m;i++){
		cin>>x>>y;
		t=0;
		for(int j=max(x-3,0);j<=x+1;j++){
			for(int k=y-3;k<=y+1;k++){
				if(hb[t]==1){
					a[j][k]=1;
				}
				t++;
			}
		}
	}
	for(int i=0;i<k;i++){
		cin>>x>>y;
		for(int j=max(x-3,0);j<=x+1;j++){
			for(int k=max(y-3,0);k<=y+1;k++){
				a[j][k]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout<<a[i][j]<<" ";
			if(a[i][j]==0){
				ans++;
			}
		}
		//cout<<endl; 
	}
	cout<<ans;
	return 0;
}



