#include<iostream> 
using namespace std;
int main(){
	int a[10],h,ans;
	for (int i=0;i<10;i++) {
		cin>>a[i];
	}
	cin>>h;
	h+=30;
	for (int i=0;i<10;i++) {
		if (a[i]<=h){
			ans+=1;
		}
	}
	cout<<ans;
	return 0;
}



