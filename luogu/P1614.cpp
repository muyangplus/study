#include<iostream>
using namespace std;
int main(){
    int n,l,a[3005],b[3002],minn=200000000;
    b[0]=0;
    cin>>n>>l;
    if(n==0){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
        if(i>=l){
        	if(b[i]-b[i-l]<minn){
        		minn=b[i]-b[i-l];
			}
		}
    }
    cout<<minn;
    return 0;
}



