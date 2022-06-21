#include<iostream>
using namespace std;
int x,y,num=0;
char input; 
int main(){
	cin>>x>>y;
	int map[x+2][y+2];
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			map[i][j]=0;
		}
	}
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cin>>input;
			if(input=='*'){
				if(map[i-1][j-1]!=-1)map[i-1][j-1]++;
				if(map[i-1][j]!=-1)map[i-1][j]++;
				if(map[i-1][j+1]!=-1)map[i-1][j+1]++;
				if(map[i][j-1]!=-1)map[i][j-1]++;
				map[i][j]=-1;
				if(map[i][j+1]!=-1)map[i][j+1]++;
				if(map[i+1][j-1]!=-1)map[i+1][j-1]++;
				if(map[i+1][j]!=-1)map[i+1][j]++;
				if(map[i+1][j+1]!=-1)map[i+1][j+1]++;
			}
		}
	}
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(map[i][j]==-1){
				cout<<'*';
			}else{
				cout<<map[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}



