#include<iostream>
using namespace std;
int main(){
	int l=0,m=0,sum=0;			//l����·�ĳ��ȣ�m���������Ŀ��sum������������ 
	cin>>l>>m;
	int a[m+1],b[m+1],c[l+1];	//a[]�����е���ʼ�㣨��Ӧ��Ŀ�е�u��,b[]�����е���ֹ�㣨��Ӧ��Ŀ�е�v��,c[]�ǵ�·������������� 
	
	//��·�ϵ�ÿһ���㶼������(0��������) 
	for(int i=0;i<=l;i++){
		c[i]=0;
	}
	
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		//�����������������(1����û��)
		for(int j=a[i];j<=b[i];j++){
			c[j]=1;
		}
	}
	
	//���������ÿһ������û���� 
	for(int i=0;i<=l;i++){
		//cout<<"i="<<i<<",tree="<<c[i]<<endl; 
		if(c[i]==0){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}



