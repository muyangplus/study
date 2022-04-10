#include<iostream>
using namespace std;
char a[5][400];
char add(int num,int x){
	if(num==0){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
		a[1][x]='X';			  a[1][x+2]='X';
		a[2][x]='X';			  a[2][x+2]='X';
		a[3][x]='X';			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==1){
					  			  a[0][x+2]='X';
					  			  a[1][x+2]='X';
					  			  a[2][x+2]='X';
					  			  a[3][x+2]='X';
					  			  a[4][x+2]='X';
	}else if(num==2){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
					  			  a[1][x+2]='X';
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
		a[3][x]='X';			  			    
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==3){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
					  			  a[1][x+2]='X';
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
					  			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==4){
		a[0][x]='X';			  a[0][x+2]='X';
		a[1][x]='X';			  a[1][x+2]='X';
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
					  			  a[3][x+2]='X';
					  			  a[4][x+2]='X';
	}else if(num==5){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
		a[1][x]='X';			  			    
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
					  			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==6){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
		a[1][x]='X';			  			    
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
		a[3][x]='X';			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==7){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
					  			  a[1][x+2]='X';
					  			  a[2][x+2]='X';
					  			  a[3][x+2]='X';
					  			  a[4][x+2]='X';
	}else if(num==8){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
		a[1][x]='X';			  a[1][x+2]='X';
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
		a[3][x]='X';			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}else if(num==9){
		a[0][x]='X';a[0][x+1]='X';a[0][x+2]='X';
		a[1][x]='X';			  a[1][x+2]='X';
		a[2][x]='X';a[2][x+1]='X';a[2][x+2]='X';
					  			  a[3][x+2]='X';
		a[4][x]='X';a[4][x+1]='X';a[4][x+2]='X';
	}
}
int main(){
	int n,num;
	cin>>n;
	for(int i=0;i<=5;i++){
		for(int j=0;j<n*4;j++){
			a[i][j]='.';
		}
	}
	for(int i=0;i<n*4;i+=4){
		scanf("%1d",&num);
		add(num,i);
	} 
	for(int i=0;i<5;i++){
		for(int j=0;j<n*4-1;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}



