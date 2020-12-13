#include <stdio.h>

int main()
{	
	int x,y,sex,num;
	A:
	printf("请任意输入0-255的数（退出请输入0）\n");
	int b=scanf("%d",&x);
	int c=getchar();                                     //储存错误类型的变量
	if(b==0)                                             //居然忘记==才是等于号！！
	{
	printf("输入有误\n");
	goto A;
	}
	if(x>255)
	{
	printf("输入有误\n");
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
			printf("性别：男；学号：%07d\n",num);
			break;
		case(1):
			printf("性别：女；学号：%07d\n",num);
			break;
      	}
	goto A;
	}

	

return 0;
}


int transfer(int x)                              //十进制转二进制
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
