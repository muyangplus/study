#include<iostream>
using namespace std;
string name,b_name;
int y,s,w,temp;
int b_y=0,b_s=0,b_w=0;
int n;
int main(){
	cin>>n;
	cin>>b_name>>b_y>>b_s>>b_w;
	for(int i=1;i<n;i++){
		cin>>name>>y>>s>>w;
		if(y+s+w>b_y+b_s+b_w){
			b_name=name;
			b_y=y;
			b_s=s;
			b_w=w;
		}
	}
	cout<<b_name<<' '<<b_y<<' '<<b_s<<' '<<b_w<<endl;
	return 0;
}



