#include<iostream>
using namespace std;
using namespace std;
const int M=20005;				//20005�������ֵ��10000+10000=20000
int t[M],g[M];					//t��Ͱ��t[i]��ʾֵΪi�����ڼ�����������ӳ����˼��Σ�g[i]��ʾֵΪi�����Ƿ���ԭ�����У�1Ϊ�ڣ�0Ϊ����
int n,a[105],ans,maxn;			//a���鿪105�������ܹ����100����
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];								//����
        g[a[i]]=1;								//�ڼ����и�ֵΪ1
    }
    for (int i=1;i<n;i++){						//����ö��������Լӳ�����
        for (int j=i+1;j<=n;j++){
            t[a[i]+a[j]]++;						//a[i]+a[j]��������ӳ�����
            maxn=max(maxn,a[i]+a[j]);			//������������ֵ
        }
    }
    for (int i=1;i<=maxn;i++){					//ֻ��Ҫö�ٵ����ֵ����
        if (t[i]>0&&g[i]) ans++;				//�ж��Ƿ����㣬�����ans++
    }
    cout<<ans<<endl;
    return 0;
}

