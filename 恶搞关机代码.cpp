#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//goto语句主要用于跳出深度嵌套 
	//cmd-command-命令行 	
	//shutdown -s -t 60  shutdown -s(设置关机-命令) -t(设置的时间)
	//system()-执行系统命令的	  -a(取消关机) 
	//cmd-command-命令行
	char input[20]={0}; 
	system("shutdown -s -t 60");
	while(1)
	{
		printf("你的电脑将在一分钟后关机请输入>:我是解除/n请输入>:");
		scanf("%s",&input);
		if(strcmp(input,"我是")==0)
		{
			system("shutdown -a"); 
			break;
		}	 
	} 
}
