#include <stdio.h>
int main() {
	{
		int i;
		int ret=1;
		int n;
		int sum=0;
//		scanf("%d",&n);
		for(n=1;n<=10;n++)
		{
//			ret=1;
//			for( i=1; i<=n ; i++ )
//			{	
				ret=ret*n;
//			}
			sum=sum+ret;
		}
		printf("%d\n",sum);
		
//		printf("%d",ret);
	}
	
	//getchar
	{
		char password[20]{0};
		int ch;
		int ret;
		printf("请输入密码:"); 
		scanf("%s",password);
//		ret=getchar();
		while((ret=getchar()) !='\n')
		{
			;
		}
		printf("是否确认（Y/N）");
		ch=getchar();
		if(ch=='Y')
		printf("确认成功\n");
		else
		printf("取消确认\n"); 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
} 
