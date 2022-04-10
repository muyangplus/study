#include<iostream>
using namespace std;
int main(){
	int l=0,m=0,sum=0;			//l是马路的长度，m是区域的数目，sum是树的数量。 
	cin>>l>>m;
	int a[m+1],b[m+1],c[l+1];	//a[]是所有的起始点（对应题目中的u）,b[]是所有的终止点（对应题目中的v）,c[]是道路（用来标记树） 
	
	//将路上的每一个点都种上树(0代表有树) 
	for(int i=0;i<=l;i++){
		c[i]=0;
	}
	
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		//将该区间的树都砍了(1代表没树)
		for(int j=a[i];j<=b[i];j++){
			c[j]=1;
		}
	}
	
	//遍历：检查每一个点有没有树 
	for(int i=0;i<=l;i++){
		//cout<<"i="<<i<<",tree="<<c[i]<<endl; 
		if(c[i]==0){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}



