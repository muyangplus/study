#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	string a;
	cin>>a;               //输入
    reverse(a.begin(),a.end());  //反转
    cout<<a;              //输出
	return 0;
}



