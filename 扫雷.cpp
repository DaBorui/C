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
	//打印列号
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
	printf("请输入排查雷的坐标>:");
	scanf("%d%d",&x,&y);
	if(x>=1&&x<=row && y>=1&&y<=col)//判断坐标合法性 
	{
		if(mine[x][y]=='1')
		{
			printf("很遗憾你被炸死了\n");
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
		printf("输出坐标非法,请重新输入\n");
	}
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("恭喜你,排雷成功\n");
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
	//雷的信息储存
	//1.布好雷的信息 
	char mine[ROWS][COLS]={0};
	//2.排查出雷的信息
	char show[ROWS][COLS]={0}; 
	//初始化数组
	InItboard(mine,ROWS,COLS,'0');
	InItboard(show,ROWS,COLS,'*');
	//打印棋盘 
//	DispalyBoard(mine,ROW,COL);
	DispalyBoard(show,ROW,COL);	
	//布置雷
	SetMine(mine,ROW,COL);
//	DispalyBoard(mine,ROW,COL);
	//扫雷
	FindMine(mine,show,ROW,COL);
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		dafault:
			printf("输入错误，请重新输入\n");
			break;
		}	
	}while(input);
}
