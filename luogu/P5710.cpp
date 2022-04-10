#include <iostream>
using namespace std;
int main(){
	int x;
	bool a, b;
	cin>>x;
	a = !(x%2);
	b = (x > 4 && x <= 12);
	cout<<(a&b)<<" "<<(a|b)<<" "<<(a&&!b||b&&!a)<<" "<<(!a&&!b);
	return 0;
}



