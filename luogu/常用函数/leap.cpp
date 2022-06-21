#include<iostream>
using namespace std;
bool is_leap(int year){
	if(((year%4==0)&&(year%100!=0))||(year%400==0)){
		return true;
	}else{
		return false;
	}
}



