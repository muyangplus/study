#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char ch[15];
    int ans=0;
    fgets(ch,15,stdin);
    int len=strlen(ch);
    for (int i=0;i<len;i++){
		if (isalnum(ch[i])){
			ans++; 
        } 
    }    
    cout<<ans<<endl;
    return 0;
}



