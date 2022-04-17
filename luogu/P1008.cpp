#include<stdio.h> 
using namespace std;
int main(){
    int a[8];
    for (int i = 123; i < 329; ++i) {
        int j = 2*i;
        int k = 3*i;
        a[0] = i / 100;//百位
        a[1] = i / 10 % 10;//十位
        a[2] = i % 10;//个位

        a[3] = j / 100;//百位
        a[4] = j / 10 % 10;//十位
        a[5] = j % 10;//个位

        a[6] = k / 100;//百位
        a[7] = k / 10 % 10;//十位
        a[8] = k % 10;//个位
        int out = 1;

        for (int l = 0; l < 9; l++) {
            for (int m = 0; m < 9; m++) {
                if(l!=m&&a[l]==a[m] || a[l] == 0){
                    out = 0;//用两个循环来判断重复元素。如果9个数中有重复元素或有元素0，则out变为0，就不会输出。
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



