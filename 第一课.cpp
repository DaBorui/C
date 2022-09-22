#include <stdio.h>
int main()
{
	//if语句的使用   
	{//{}为一个代码块
	int a=12;
	if(a<18)
		printf("未成年\n");
	else//else与最近的if语句匹配 
		printf("成年\n"); 
	}
	printf("\n");
	
	{
		int i;
		for(i=0;i<=100;i++)//利用for循环输出1-100 
		{
			if(i%2==1)//判断一个数是否为奇数 
				printf("%d ",i); //判断为真则输出i 
		} 
		printf("\n\n");
	}
		
		
	//switch语句的使用 
//	{
//		int day;
//		scanf("%d",&day);
//		if (day%7==0)
//		printf("星期7"); 
//		switch(day%7)//switch语句内可以出现if语句 
//		{//case :后必须是整形常量表达式：
//			//语句； 
//			case 1: 
//				printf("星期1\n"); 
//				if(day==1)//switch语句内可以出现if语句 
//				printf("hehe\n");//switch语句允许嵌套switch语句 
//				break; 
//			case 2:
//				printf("星期2\n");
//				break;
//			case 3:
//				printf("星期3\n");
//				break;
//			case 4:
//				printf("星期4\n"); 
//				break;
//			case 5:
//				printf("星期5\n"); 
//				break;
//			case 6:
//				printf("星期6\n");
//				break; 
//			case 7:
//				printf("星期7\n");
//				break;
////			default:
////				printf("输入错误"); 
////				break; 
//		 } 
//		 printf("\n"); 
//		 }
//continue用于终止本次循环，continue后的代码不再执行，而是直接跳转到while判断语句的部分 ，进行下一次循环条件的判断		 
//break用于永久终止循环 
		 {
		 	int i;
			while(i<=10){
				if(i==5)
				break; 
//				continue; 
				printf("%d ",i);
				i++;
			} 
			printf("\n"); 
		 }
		 
		 {
		 	int ch;
			//ctrl+z
			//EOF--end of file(文件结束标志) -> -1 
			while((ch=getchar()) !=EOF)//getchar可以接受键盘上的一个字符  getchar输入 
			{ 
				putchar(ch);//putchar为输出 putchar(ch);全等printf("%c\n",ch); 
			}
			
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
