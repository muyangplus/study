#include<iostream>
using namespace std;
string s;
char p=0;
int cnt=0;  
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
        	cnt++;
		} else {
            p=s[i];
            break;
        }
    }
    int x=cnt;
    cnt--;
    while(s[cnt]=='0'&&cnt>0){
		cnt--;
	} 
    for(int i=cnt;i>=0;i--){
    	cout<<s[i];
	}
    if(p==0){
    	return 0;
    }
    cout<<p;
    if(p=='%'){
		return 0;
	} 
    int m=s.size()-1;
    while(s[x+1]=='0'&&x<m-1){
    	x++;
	}
    while(s[m]=='0'&&m>x+1){
    	m--;
	}
    for(int i=m;i>x;i--){
    	cout<<s[i];
	}
    return 0; 
}
/* 
string str,ans;
void opposite(string &a){
	for(int i=a.length()-1;i>=0;i--){
		if(a[i]!='0'){
			ans.push_back(a[i]);
		}else if (ans.size()!=0){
			ans.push_back('0');
		}
	}
} 
void make(int &input,char ch){
	string a = str.substr(0,input);
	string b = str.substr(input+1,str.length());
	opposite(a);
	ans.push_back(ch);
	opposite(b);
}
int main(){
	cin>>str;
	if(str==to_string('0')){
		cout<<0<<endl;
		return 0;
	}
	int xs=str.find('.');
	int fs=str.find('/');
	int bfs=str.find('%');
	if(xs!=-1){
		make(xs,'.');
	}else if(fs!=-1){
		make(fs,'/');
	}else if(bfs!=-1){
		make(bfs,'%');
	}else {
		opposite(str);
	}
	int cnt=ans.length();
	for(int i=cnt-1;i>=0;i--){
		if(ans[i]!='0'){
			break;
		}
		cnt--;
	}
	ans=ans.substr(0,cnt);
	cout<<ans<<endl;
	return 0;
}
*/
 


