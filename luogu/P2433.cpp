#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.141593;
int main(){
	int T=0;
	cin>>T;
	switch(T){
		case 1:
			/*
			����� I love Luogu!
			*/
			cout<<"I love Luogu!";
			break;
		case 2:
			/*
			������ 10 ��ƻ����СA ������ 2 ����Uim ������ 4 ������β������ʣ�µ����е�ƻ����������֪����
			СA �� Uim ������һ�����߶���ƻ����
			��β�������߶���ƻ����
			������Ҫ��дһ�������������������Ϊ�𰸣��м�ʹ�ÿո�ֿ���
			*/
			cout<<"6 4";
			break;
		case 3:
			/*
			������ 14 ��ƻ����Ҫ���ָ� 4 ��ͬѧ���ֲ�����ƻ���Żر��䡣���ʣ�
			ÿλͬѧ�ֵܷü���ƻ����
			һ���ֳ�ȥ����ƻ����
			�Ѽ���ƻ���Żر��䣿
			������Ҫ��дһ�������������������Ϊ�𰸣�ÿ������һ�С�
			*/
			cout<<"3"<<endl<<"12"<<endl<<"2";
			break;
		case 4:
			/*
			������ 500 �����ķ�լ����ˮ��Ҫ���ָ� 3 ��ͬѧ��ÿλͬѧ���Էֵ����ٺ�����
			�����һ��������Ϊ��������� 6 λ��Ч���֣��Ҳ�ʹ�ÿ�ѧ��������
			*/
			cout<<"166.667";
			break;
		case 5:
			/*
			���л𳵳� 260 �ף�ÿ���� 12 �ף����л𳵳� 220 �ף�ÿ���� 20 �ף�
			����������У���������ͷ����ʱ��ʼ��ʱ���೤ʱ���������β���룿��֪����������
			*/
			cout<<(260+220)/(12+20); 
			break;
		case 6:
			/*
			һ�������γ����ֱ��� 6cm��9cm�������ĶԽ��߳��ȣ�cm����ֱ��ʹ�� cout �����
			*/
			cout<<sqrt(6*6+9*9); 
			break;
		case 7:
			/*
			Uim �����˻�������100Ԫ������������Ĳ�����
			��������� 10 Ԫ��
			���ﻨ���� 20 Ԫ��
			�������Ǯȫ��ȡ����
			����ÿ�β���������˻�����ʹ�û��з�������
			*/
			cout<<110<<endl<<90<<endl<<0;
			break;
		case 8:
			/*
			���뾶Ϊ r=5�������Բ���ܳ���������������ȡ ��=3.141593��
			��ֱ��ʹ�� cout ����𰸣�ÿ��һ�����֡�
			*/
			cout<<2*pi*5<<endl<<pi*5*5<<endl<<4.0/3*pi*5*5*5;
			break;
		case 9:
			/*
			һֻС���������ɸ����ӡ�
			��һ�����պó�����Щ���ӵ�һ�룬��̰������һ����
			�ڶ�����Ҳ�պó���ʣ�����ӵ�һ�룬̰������һ����
			���������ָպó���ʣ�µ����ӵ�һ�룬��̰������һ����
			����������һ������������ֻʣ��һ���ˡ�
			����С�����˼������ӣ�
			*/
			cout<<(((1+1)*2+1)*2+1)*2;
			break;
		case 10:
			/*
			��ȵ����������ǵ�λʱ���ھ������ӵġ�
			8 ̨����� 30 ���ӿ��Ըպð���������еĳ���������ϣ�10 ̨����� 6 ���ӿ��Ըպð���������еĳ���������ϡ� 
			���ʼ�̨����������� 10 ����ʱ�պð���������еĳ���������ϣ�
			*/
			cout<<9;
			break;
		case 11:
			/*
			СA�ܲ��ٶ� 5m/s����β���ܲ��ٶ� 8m/s����β����СA���� 100m������ͬʱ���ܣ�������Ҫ�೤ʱ���β�¿���׷��СA��
			���һ�����ֱ�ʾ�𰸣�ʹ�� cout ֱ�������
			*/
			cout<<1.0*100/(8-5);
			break;
		case 12:
			/*
			��Ҷ�֪���� 26 ��Ӣ����ĸ������A�ǵ�һ����ĸ���������������
			M ����ĸ���еĵڼ�����ĸ��
			�� 18 ����ĸ��ʲô��
			���һ�����ֺ�һ����ĸ��ʹ�û��и�����
			*/
			cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
			break;
		case 13:
			/*
			С A ������������Ƥ�࣬һ���뾶�� 4��һ���뾶�� 10��
			�������������Ƥ������һ��Ȼ�������һ�������壬���������������ⳤ�Ƕ��٣�
			��������������������ȥС����֮������֡�ȡ \pi = 3.141593��=3.141593��
			*/
			cout<<(int)(pow(4.0/3*pi*(4*4*4+10*10*10),1.0*1/3));
			break;
		case 14:
			/*
			���ݹ�����У��Ԥ�⣬���γ̶���Ϊ 110 Ԫʱ������ 10 �˱�����
			����γ̼۸�ÿ���� 1 Ԫ���ͻ�� 1 �������ߣ���֮��Ȼ����
			���ϣ���ܹ����յ� 3500 Ԫѧ�ѵĻ�����ôӦ�ö��۶����أ�
			��֪�����������𰸷���Ҫ����ȡ��С����һ����
			�������𰸲��������������������뾫ȷ��������
			*/
			cout<<50;
			break;
		default:
			cout<<"ERROR";
			break;
	} 
	return 0;
}


