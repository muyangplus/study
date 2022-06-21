#include<iostream>
using namespace std;
int n;
char a[15][15],b[15][15],c[15][15],d[15][15];
bool isnum1(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	b[n-i+1][n-j+1]=a[i][j];
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i][j]!=c[i][j]){
    			return 0;
			}else{
				return 1;
			}
		}
	}
}
bool isnum2(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	b[n-i+1][n-j+1]=a[i][j];
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i][j]!=c[i][j]){
    			return 0;
			}else{
				return 1;
			}
		}
	}
}
bool isnum3(){
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	b[n-j+1][i]=a[i][j];
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i][j]!=c[i][j]){
    			return 0;
			}else{
				return 1;
			}
    	}
	}
}
bool isnum4(){
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	b[i][n-j+1]=a[i][j];
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i][j]!=c[i][j]){
    			return 0;
			}else{
				return 1;
			}
		}
	}
}
bool isnum5(){
	isnum4();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=b[i][j];
			if(isnum1()){
				return 1;
			}
		}
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		a[i][j]=b[i][j];
    		if(isnum2()){
    			return 1;
			}
		}
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		a[i][j]=b[i][j];
    		if(isnum3()){
    			return 1;
			}else{
				return 0;
			}
		}
	}
}
bool isnum6(){
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i][j]!=c[i][j]){
    			return 0;
			}else{
				return 1;
			}
		}
	}
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
	     	cin>>a[i][j];
	     	d[i][j]=a[i][j];
		}
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>c[i][j];
		}
	}
    if(isnum1()){
        cout<<1;
        return 0;
    }
    if(isnum2()){
        cout<<2;
        return 0;
    }
    if(isnum3()){
    	cout<<3;
    	return 0;
	}
	if(isnum4()){
		cout<<4;
		return 0;
	}
	if(isnum5()){
		cout<<5;
		return 0;
	}
	if(isnum6()){
		cout<<6;
		return 0;
	}
	cout<<7;
    return 0;
}



