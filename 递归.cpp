#include <stdio.h>
#include <string.h>

//�ݹ��ʹ��,�ݹ���������������,ÿ�εݹ����֮��Խ��Խ�ӽ������������
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
//���õ������n��쳲������� 
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
	//ʹ�õݹ飬���ַ������ȣ���������ʱ���� 
	{
		char arr[]="bit";
//		int count=strlen(arr);//strlen--���ַ������� 
//		printf("%d ",count);
		int len=my_strlen(arr);
		printf("%d ",len); 
	}
	//�ݹ������ 
	{
		//��n�Ľ׳�
		int n=5;
//		scanf("%d",&n);
		int ret=Fac(n);
		printf("%d \n\n",ret);
	}
	
	//������n��쳲������� 
	{
		int n=10;
		int ret=0;
//		scanf("%d",&n);
		ret=Fib(n);
		printf("%d ",ret);
	}
	//��ŵ������,������̨������ 
	{
		
	}
} 
