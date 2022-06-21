#include<iostream>
using namespace std;
int n=0;
string str,temp;
int cho=0;
int a=0,b=0;
int flag=0;
int main(){
	cin>>n;
	cin>>str;
	for (int i=0;i<n;i++){
		cin>>cho;
		switch(cho){
			case 1:
				cin>>temp;
				str+=temp;
				cout<<str<<endl;
				break;
			case 2:
				cin>>a>>b;
				str=str.substr(a,b);
				cout<<str<<endl;
				break;
			case 3:
				cin>>a>>temp;
				str.insert(a,temp);
				cout<<str<<endl;
				break;
			case 4:
				cin>>temp;
				flag=-1;
				for (int i=0;i<str.length();i++){
					//cout<<">>> i="<<i<<"str:"<<str[i]<<",flag:"<<flag<<endl;
					if (str[i]==temp[0]){
						flag=i;
						for (int j=1;j<temp.length();j++){
							//cout<<">>> str:"<<str[i+j]<<",j="<<j<<""<<",temp:"<<temp[j]<<",flag:"<<flag<<endl;
							if (str[i+j]!=temp[j]){
								flag=-1;
								break;
							}
						}
						if (flag!=-1){
							break;
						}
					}

				}
				cout<<flag<<endl;
				break;
		}
	}
	return 0;
}



