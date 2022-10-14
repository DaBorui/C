#include <stdio.h>

int count_bit_one(int n)
{
	int count=0;
	int i=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	
//	for(i=0;i<32;i++)
//	{
//		if(1==((n>>i)&1))
//		{
//			count++;
//		}
//	}
	return count;
}

void print(int n)
{
	int i=0;
	printf("����λ:\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d",(n>>i)&1);
	}
	printf("\nż��λ:\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d",(n>>i)&1);
	}
}

void print_table(int n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",i,j,i*j);
		}
		printf("\n");
	}
}

void print_1(int n)//123
{
	if(n!=0)
	{
		printf("%d ",n%10);
		n=n/10;
	}
	print_1(n);
}


int main()
{
	//�����������1�ĸ��� 
//	{
//		int a=13;
//		scanf("%d",&a);
//		int count=count_bit_one(a);
//		printf("count=%n",count);
//	}
	//��ȡһ�����������������е���������λ��ż��λ�ֱ��ӡ���� 
//	{
//		int m=0;
//		scanf("%d",&m);
//		print(m);
//	}
	//ʵ��һ����������ӡ�˷��ھ����ھ�������������Լ����� 
//	{
//		int n=0;
//		scanf("%d",&n);
//		print_table(n); 
//	}
	//��ӡһ��������ÿһλ 
	{
		int n;
		scanf("%d",&n);
		print_1(n); 
	}
}
