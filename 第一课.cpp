#include <stdio.h>
#include <math.h>
int main()
{
	//输出值从大到小排列 
//	{
//		int a,b,c;
//		int tmp;
//		scanf("%d%d%d",&a,&b,&c);
//		if(a<b)
//		{
//			tmp=a;
//			a=b;
//			b=tmp;
//		}
//		if(a<c)
//		{
//			tmp=a;
//			a=c;
//			c=tmp;
//		}
//		if(b<c)
//		{
//			tmp=b;
//			b=c;
//			c=tmp;
//		} 
//		printf("%d %d %d",a,b,c);
//	}
//	printf("\n\n\n");
	//求三的倍数 
//	{
//		int i;
//		i=3;
//		while(i%3==0)
//		{
//			printf("%d ",i);
//			i+=3;
//			if(i>100)
//			break;
//		}	
//	}
//	printf("\n\n\n");
	
	//求公约数，辗转相除法 
//	{
//		int m,n;
//		int r;
//		scanf("%d%d",&m,&n);
//		while((r=m%n) !=0)
//		{
//			//r=m%n;
//			m=n;
//			n=r;
//		}
//		printf("%d\n\n\n",n);
//	} 
//		printf("\n\n\n");
		
		//判断是否为闰年 
//		{	
//			int year;
//			int count=0;
//			scanf("%d",&year);
//			if(year%4==0&&year%100!=0)
//			{
//				printf("%d ",year);
//			}
//			else if(year%400==0)
//			{
//				printf("%d ",year);
//			}
//			else
//			printf("该年份不是闰年\n");
			//判断时间段内的时间是否为闰年
//			for(year=1000;year<=2000;year++)
//			{
//			 	if(year%4==0&&year%100!=0)//方法一 
//				{
//					printf("%d ",year);
//					count++;
//				}
//				else if(year%400==0)
//				{
//					printf("%d ",year);
//					count++;
//				}
				
//				if(((year%4==0)&&(year%100!=0))||(year%400==0))//方法二 
//				{
//					printf("%d ",year);
//					count++;
//				}
//			}
//			printf("\n共有闰年个数:%d",count);
//		}
//		printf("\n\n\n");
		//素数只能被一和它本身整除 
		//判断是否为素数的方法(1):试除法 
		{
			int i;
			int j;
			int count=0;
			for(i=100;i<=200;i++)
			{
				for(j=2;j<=sqrt(i);j++)//sqrt数学函数开平方 
				{
					if(i%j==0)
					{
						break;
					}	
				} 
				if(j>sqrt(i))
				{
					count++;
					printf("%d ",i);
				}
			} 
			printf("\n素数共有个数:%d\n\n\n",count);
		}
		//素数求解的n种办法有很多 
		 
		//计算1/1-1/2+1/3-......+1/99-1/100的值 
		{
			int i;
			double sum;
			int flag=1;
			for(i=1;i<=100;i++)
			{
				
				sum += flag * 1.0/i;//1/2是浮点型，所以采用double 
				flag= -flag;
			} 
			printf("%lf\n\n\n",sum);
		}
		
		//求数组内的最大值 
		{
			int i;
			int arr[]={-5,-4,-3,-2,-1,0,1,2,3,4,5,};
			int max=arr[0];//假设数组内的最大值为arr[0] 
			int sz=sizeof(arr)/sizeof(arr[0]);//数组内字符的个数 
			for(i=1;i<sz;i++)
			{
				if(max<arr[i])
				{
					max=arr[i];
				}
			} 
			printf("%d\n\n\n",max);
		}
		//打印九九乘法表 
		{
			int i,j;
			for(i=1;i<=9;i++)//i控制行 
			{
				for(j=1;j<=i;j++)//j控制列 
				{
					printf("%d*%d=%-3d",i,j,i*j);//-3d中的3代表打印三位，“-”代表左对齐，默认为右对齐 
				}
				printf("\n");
			}
		}	
} 
