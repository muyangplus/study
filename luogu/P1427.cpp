#include<iostream>
using namespace std; 
int a[100],n=0;
int main(){
    for(int i=0;;i++){
        cin>>a[i];
        if(a[i]==0){
			break;
		}
        n=i;
    }
    for(int j=n;j>=0;j--){
    	cout<<a[j]<<" ";
	}
    return 0;
}



