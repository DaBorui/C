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
	//1.����һ������� 
	int ret;
	int guess;
	ret=rand()%100+1;//rand()%100��ʾȡ100���ڵ����������0~99������ 		rand()--����һ������� 
//	printf("%d\n",ret);
	//2.������ 
	while(1){
		printf("�������\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n"); 
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		
	} 
}

int main()
{	//��������Ϸ 
	{	
		//��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0.0.0��=��xxxx����λ/�� 
		//srand����Ҫһ��ʱ�̱仯����-����-ʱ���
		srand((unsigned int)time(NULL));//��ʱ�����������������������  ��time��ֵת����unsigned int 
		//time_t time(time_t* timer)   //timeҪ����һ��ָ��		NULLΪ��ָ��	 
		//time_t �����Ͼ��Ǹ������� 	 
		int input;
		do
		{
			menu(); //�˵��б��� 
			printf("��ѡ��>:\n");
			scanf("%d",&input);
			switch(input)
			{
				case 1:
					game();	
					break;
				case 0:
					printf("�˳���Ϸ\n");
					break;
				default:
					printf("ѡ�����\n"); 
					break;	
			} 
		}while(input);
	}	
} 
