#include <iostream>
#include <stdio.h>
using namespace std;
int hw1(void);
int hw2(void);
int hw3(void);
int main()
{
	A:
	int a;
	cout<<"����1,2��3�鿴��ҵ�����������������˳�\n"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
		cout<<"��ҵ1���˷���\n"<<endl; 
		hw1() ;
		cout<<"\n"<<endl;
		goto A;                        //����goto ���ѭ�����main���������� 
		break;
		case 2:
		cout<<"��ҵ2�����Ľ���ת��\n"<<endl;
		hw2();
		goto A;
		break;	
		case 3:
		cout<<"��ҵ3������\n"<<endl;
		hw3();
		goto A;
		break;
		default:
		cout<<"�ټ���\n"<<endl;
		break;
	}
	return 0;
}
  
//======================================= 
int hw1(void)
{
	int  i,j;
	for(i=15;i<95;i+=10)
	{
	for(j=15;j<=i;j+=10)
	{
	  printf("%d*%d=%d",j,i,j*i);
	  printf("\t");

	}
	printf("\n");

	}


	

	return 0;
}
//======================================== 
int hw2(void)
{	
	int x,y,sex,num;
	A:
	printf("����������0-255�������˳�������0��\n");
	int b=scanf("%d",&x);
	int c=getchar();                                     
	if(b==0)                                             
	{
	printf("��������\n");
	goto A;
	}
	if(x>255)
	{
	printf("��������\n");
	goto A;
	}
	while(x!=0){
	int transfer(int x);
	sex=transfer(x)/10000000;
	if(transfer(x)>10000000)
			{
			num=transfer(x)-10000000;
			}

		else {
			num=transfer(x);
		}
	switch(sex)
	{
		case(0):
			printf("�Ա��У�ѧ�ţ�%07d\n",num);
			break;
		case(1):
			printf("�Ա�Ů��ѧ�ţ�%07d\n",num);
			break;
      	}
	goto A;
	}

	

return 0;
}


int transfer(int x)                              //ʮ����ת������ 
{
	int  p=1,y=0,yushu;
	while(1)
	{
	 yushu=x%2;
	 x/=2;
	 y+=yushu*p;
	 p*=10;
	 if(x<2)
	 {
	  y+=x*p;
	  break;
	 }
	}
	return y;
}
//====================================== 
int hw3(void)
{

	cout<<"������10������"<<endl;
	int num[10];
	int *p,i;
	p=num;
	for(i=0;i<10;i++)
	{	cin>>num[i];
	}
	for(p=num+9;p>=num;p--)
	{
		cout<<*p<<' ';
	}
	cout<<"\n";
	return 0;
}

