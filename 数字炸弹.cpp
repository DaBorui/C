#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
	printf("******************************\n");
	printf("****   1. paly  0. exit   ****\n");
	printf("******************************\n"); 
}
//RAND_MAX-32767
void game(){
	//1.生成一个随机数 
	int ret;
	int guess;
	ret=rand()%100+1;//rand()%100表示取100以内的随机数，即0~99的数字 		rand()--生成一个随机数 
//	printf("%d\n",ret);
	//2.猜数字 
	while(1){
		printf("请猜数字\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n"); 
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
		
	} 
}

int main()
{	//猜数字游戏 
	{	
		//当前计算机的时间-计算机的起始时间（1970.1.1.0.0.0）=（xxxx）单位/秒 
		//srand中需要一个时刻变化的数-整形-时间戳
		srand((unsigned int)time(NULL));//用时间戳来设置随机数的生成起点  将time的值转换成unsigned int 
		//time_t time(time_t* timer)   //time要的是一个指针		NULL为空指针	 
		//time_t 本质上就是个长整型 	 
		int input;
		do
		{
			menu(); //菜单列表函数 
			printf("请选择>:\n");
			scanf("%d",&input);
			switch(input)
			{
				case 1:
					game();	
					break;
				case 0:
					printf("退出游戏\n");
					break;
				default:
					printf("选择错误\n"); 
					break;	
			} 
		}while(input);
	}	
} 
