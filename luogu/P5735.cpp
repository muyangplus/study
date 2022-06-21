#include<iostream>
#include<cmath>
using namespace std;
double px1,py1;
double px2,py2;
double px3,py3;
double c=0;
double dis(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
	cin>>px1>>py1>>px2>>py2>>px3>>py3;
	c+=dis(px1,py1,px2,py2);
	c+=dis(px1,py1,px3,py3);
	c+=dis(px3,py3,px2,py2);
	printf("%.2f",c);
	return 0;
}



