#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char dict[27][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};//¶ÔÓ¦
int dic[27]={0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
int num[7],top=0,flag=0;
char word[10];
string str;
int main(){
	cin>>str;
	for(int i=0;i<6;i++){
		scanf("%s",&word);
		for(int j=0;j<27;j++){
			if(!strcmp(word,dict[j])){
				num[++top]=dic[j];
				break;
			}
		}
	}
	sort(num,num+top);
	for(int i=0;i<=top;i++){
		if(flag){
			printf("%.2d",num[i]);
		}else if(num[i]){
			cout<<num[i]<<endl;
			flag=1;
        }
    }
    if(!flag){
    	cout<<0;
    }
	return 0;
}



