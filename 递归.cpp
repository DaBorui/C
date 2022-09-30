#include <stdio.h>
#include <string.h>

//递归的使用,递归必须存在限制条件,每次递归调用之后越来越接近这个限制条件
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}

//int my_strlen(char* ret)
//{
//	int count=0;
//	while(*ret!='\0')
//	{
//		count++;
//		ret++;
//	}
//	return count;
//}

int my_strlen(char* ret)
{
	if(*ret!='\0')
		return 1+my_strlen(ret+1);
	else
		return 0;
}

int Fac(int n)
{
	if(n<=1)
	return 1;
	else
	return n*Fac(n-1);
}

//int Fib(int n)
//{
//	if(n<=2)
//	return 1;
//	else
//	return Fib(n-1)+Fib(n-2);
//}
//利用迭代求第n个斐波那契数 
int Fib(int n)
{
	int a=1,b=1,c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}

int main()
{	 
	{ 
		int num=1234;
//		scanf("%d",&num);//1234
		print(num);
	}
	printf("\n\n"); 
	//使用递归，求字符串长度，不创建临时变量 
	{
		char arr[]="bit";
//		int count=strlen(arr);//strlen--求字符串长度 
//		printf("%d ",count);
		int len=my_strlen(arr);
		printf("%d ",len); 
	}
	//递归与迭代 
	{
		//求n的阶乘
		int n=5;
//		scanf("%d",&n);
		int ret=Fac(n);
		printf("%d \n\n",ret);
	}
	
	//描述第n个斐波那契数 
	{
		int n=10;
		int ret=0;
//		scanf("%d",&n);
		ret=Fib(n);
		printf("%d ",ret);
	}
	//汉诺塔问题,青蛙跳台阶问题 
	{
		
	}
} 
