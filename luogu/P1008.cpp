#include<stdio.h> 
using namespace std;
int main(){
    int a[8];
    for (int i = 123; i < 329; ++i) {
        int j = 2*i;
        int k = 3*i;
        a[0] = i / 100;//��λ
        a[1] = i / 10 % 10;//ʮλ
        a[2] = i % 10;//��λ

        a[3] = j / 100;//��λ
        a[4] = j / 10 % 10;//ʮλ
        a[5] = j % 10;//��λ

        a[6] = k / 100;//��λ
        a[7] = k / 10 % 10;//ʮλ
        a[8] = k % 10;//��λ
        int out = 1;

        for (int l = 0; l < 9; l++) {
            for (int m = 0; m < 9; m++) {
                if(l!=m&&a[l]==a[m] || a[l] == 0){
                    out = 0;//������ѭ�����ж��ظ�Ԫ�ء����9���������ظ�Ԫ�ػ���Ԫ��0����out��Ϊ0���Ͳ��������
                    break;
                }
            }
        }

        if(out){
            printf("%d %d %d\n",i,j,k);
        }
    }
    return 0;
}



