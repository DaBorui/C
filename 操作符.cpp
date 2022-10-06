#include <stdio.h>

int main()
{
	//算数操作符--只作用于整数 
	{
		//右移操作符--1.算数右移-右边丢弃，左边补原符号位	2.逻辑右移-右边丢弃，左边补0 
		int a=5;
		int b= a>>1;//对于移动操作符，不要移动负数位，这个是标准未定义的 
		printf("%d\n",b);	
		//左移操作符--右边丢弃，左边补0 
		int c=a<<1;
		printf("%d\n\n",c);
	}
	//位操作符 
	{
		//& - 按位与 - 按2进制位与 - 全1出1，有0出0 
		int a=3,b=5;
		int c=a&b;
		printf("%d\n",c); 
		//| - 按位或 - 按2进制位或 - 有1出1，全0出0 
		int d=a|b;
		printf("%d\n",d); 
		//^ - 按位异或 - 按2进制异或 - 相同出0，不同出1
		int e=a^b;
		printf("%d\n\n",e);  
	}
	//不创建变量互换数据
	{
		//加减法-可能会溢出 
		int a=3;
		int b=5;
//		a=a+b;
//		b=a-b;
//		a=a-b; 
		printf("%d %d\n",a,b); 
		//异或的方法,不会产生进位，不会溢出 
		a=a^b;
		b=a^b;
		a=a^b;
		printf("%d %d\n\n",a,b);
	}
	//求一个整数存储内存中的二进制中1的个数 
	{
		//有缺陷 
		int num=10;
//		scanf("%d",&num);
		int count=0;
		while(num)
		{
			if(num%2==1)
				{
					count++;
				}
			num=num/2;
		}
		printf("%d\n",count);
		//利用按位与(&)和右移操作符(>>) 
		int i=0;
		for(i=0;i<32;i++)
		{
			if(1==((num>>i)&1))
			{
				count++;
			}
		}
		printf("%d\n\n",count);
	}
}
