#include <stdio.h>
int main()
{
	//getchar()的运用 
//	{
//		int ch;
//		int ret;
//		char password[20]{0};//password为密码 密码是一个字符 
//		printf("请输入密码：");
//		scanf("%s",password);
//		while((ret=getchar()) !='\n')//利用while循环对getchar循环将数据缓冲区中的数据都读取 
//		{
//			;
////			putchar(ret);
//		}
//		printf("请确认（Y/N）");
//		ch=getchar();//getchar读取一个字符赋值给ch 
//		if(ch=='Y')
//		printf("确认成功");
//		else
//		printf("放弃确认");
//	}
//	
//	{
//		int ch;
//		while((ch=getchar()) !=EOF)
//		{
//			if(ch<'0' || ch>'9')
//			continue;
//			putchar(ch); 
//		}
//	}
	
	//for循环 
	{
		int i=0;
		// 初始化 判断   调整 
		for(i=0 ; i<=10 ; i++)//不可在循环体内改变循环变量，防止for循环失控 
		{//建议for循环采用“前闭后开区间”的写法 
			printf("%d ",i); 
		}	
		printf("\n\n\n");
		//for循环初始化，判断，调整都可省略
		//判断部分如果被省略，则 
//		for(;;){
//			printf("hehe\n");
//		}
	}
	//do...while循环 
	{//do...while循环的特点至少循环一次 
		int i=1;
		do{//先循环一次再判断 
			printf("hehe ");
			i++;
		} 
		while(i<=10);
	}
	printf("\n\n\n");
	
	{
		int ret=1;
		int i;
		int n;
		int sum=0;
//		scanf("%d",&n);//求n的阶乘 
		for(n=1;n<=10;n++) //求10之前的阶乘相加 
		{
			ret=1;
			for(i=1;i<=n;i++){//求n的阶乘 
			ret=ret*i; //求n的阶乘 
		}//求n的阶乘 
		sum=sum+ret;//求10之前的阶乘相加 
//			printf("%d ",i);	
		}
		printf("%d ",sum);//求10之前的阶乘相加 
//		printf("%d ",ret);
	}
	printf("\n\n\n");
	//求10之前的阶乘相加的优化 
	{
		int n;
		int ret=1;
		int sum=0;
		for(n=1;n<=10;n++)
		{
			ret=ret*n;
		} 
		sum=sum+ret;
	} 


	 
	
	
	
	
} 
