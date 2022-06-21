#include<iostream>
using namespace std;
string a,b;
int main(){
    getline(cin,a);
    getline(cin,b);
    for (int i=0;i<a.length();++i){
    	if ((a[i]>='A')&&a[i]<='Z'){
    		a[i]+=32;
		}
    }
    for (int i=0;i<b.length();++i){
        if ((b[i]>='A')&&b[i]<='Z'){
    		b[i]+=32;
		}
    }
    
    a=' '+a+' ';
    b=' '+b+' ';
    
    //cout<<a<<endl<<b<<endl<<endl;
    
    if (b.find(a)==string::npos){
        cout<<-1<<endl;
        
    } else {
        int alpha=b.find(a);
        int beta=b.find(a);
        int s=0;
        while (beta!=string::npos){
            s++;//¼ÆÊıÆ÷
            beta=b.find(a,beta+1);
        }
        cout<<s<<" "<<alpha<<endl;
    }
    return 0;
}



