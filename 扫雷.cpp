#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9 
#define EASY_COUNT 10

void InItboard(char mine[ROWS][COLS],int rows,int cols,char set)
{
	int i=0,j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			mine[i][j]=set;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0,j=0;
	//��ӡ�к�
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY_COUNT;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x-1][y]+
	mine[x-1][y-1]+
	mine[x][y-1]+
	mine[x+1][y-1]+
	mine[x+1][y]+
	mine[x+1][y+1]+
	mine[x][y+1]+
	mine[x-1][y+1]-8*'0';
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0,y=0;
	int win=0;
	while(win<row*col-EASY_COUNT)
	{
	printf("�������Ų��׵�����>:");
	scanf("%d%d",&x,&y);
	if(x>=1&&x<=row && y>=1&&y<=col)//�ж�����Ϸ��� 
	{
		if(mine[x][y]=='1')
		{
			printf("���ź��㱻ը����\n");
			DispalyBoard(mine,ROW,COL);
			break;
		}
		else
		{
			int count=get_mine_count(mine,x,y);
//			if(count==0)
//			{
//				count=get_mine_count(mine,x-1,y-1);
//				count=get_mine_count(mine,x+1,y+1);
//				count=get_mine_count(mine,x-1,y+1);
//				count=get_mine_count(mine,x+1,y-1);
//			}
			show[x][y]=count+'0';
//			show[x-1][y-1]=count+'0';
//			show[x+1][y+1]=count+'0';
//			show[x-1][y+1]=count+'0';
//			show[x+1][y-1]=count+'0';
			DispalyBoard(show,ROW,COL);
			win++;
		}
	}
	else
	{
		printf("�������Ƿ�,����������\n");
	}
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("��ϲ��,���׳ɹ�\n");
		DispalyBoard(mine,ROW,COL);
	}
}

void menu()
{
	printf("************************\n");
	printf("******* 1. paly ********\n");
	printf("******* 0. eixt ********\n");
	printf("************************\n");
}

void game()
{
	//�׵���Ϣ����
	//1.�����׵���Ϣ 
	char mine[ROWS][COLS]={0};
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS]={0}; 
	//��ʼ������
	InItboard(mine,ROWS,COLS,'0');
	InItboard(show,ROWS,COLS,'*');
	//��ӡ���� 
//	DispalyBoard(mine,ROW,COL);
	DispalyBoard(show,ROW,COL);	
	//������
	SetMine(mine,ROW,COL);
//	DispalyBoard(mine,ROW,COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		dafault:
			printf("�����������������\n");
			break;
		}	
	}while(input);
}
