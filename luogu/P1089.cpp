#include<iostream>
using namespace std;
int main (){ 
	int money,cost,mama,flag=1,out;
    for(int i=1;i<=12;i++)
    {
        money+=300;
        cin>>cost;
        money-=cost;
           if(money<0){
              flag=0;
              out=i;
              break;
           }
        mama+=money/100;
        money%=100;
    }    
    if(flag==1){
        money+=mama*120;
        cout<<money;
    } else {
        cout<<-out;
    }    
    return 0;
}



