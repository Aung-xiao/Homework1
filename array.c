#include <iostream>
using namespace std;
int main()
{

	cout<<"请输入10个数字\n"<<endl;
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

	return 0;
}
