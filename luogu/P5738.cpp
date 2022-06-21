#include<iostream>
using namespace std;
int m,n;
double sum,maxx=0.00,minn=10.00; 
int main(){
	cin>>n>>m;
	int ans[n][m];
	double point[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>ans[i][j];
		}
	}
	for(int i=0;i<n;i++){
		sum=0;
		maxx=0.00;
		minn=10.00;
		for(int j=0;j<m;j++){
			//cout<<">>> ans="<<ans[i][j]<<endl;
			sum+=ans[i][j];
			if(ans[i][j]<minn){
				minn=ans[i][j];
			}
			if(ans[i][j]>maxx){
				maxx=ans[i][j];
			}
		}
		sum-=minn;
		sum-=maxx;
		point[i]=sum/(m-2);
		//cout<<">>> point="<<point[i]<<endl;
	}
	maxx=0;
	for(int i=0;i<n;i++){
		if(point[i]>maxx){
			maxx=point[i];
		}
	}
	printf("%.2f",maxx);
	return 0;
}



