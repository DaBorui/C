#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3 
#define COL 3
//void Initboard(char board[ROW][COL],int row,int col);
//void DisplayBoard(char board[ROW][COL],int row,int col);
//void PlayerMove(char board[ROW][COL],int row,int col);
//void ComputerMove(char board[ROW][COL],int row,int col);
//int isFull(board[ROW][COL],int row,int col);

int isFull(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ') 
			{
				return 0;
			}
		}
	}
	return 1;
}

char isWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	//横三列 
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')//三点相同且不等于空格,游戏胜利
		{
			return board[i][1];
		}
	}
	//竖三列 
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')//三点相同且不等于空格,游戏胜利
		{
			return board[1][i];
		}
	}
	//两个对角线 
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')//三点相同且不等于空格,游戏胜利 
	return board[1][1];
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')//三点相同且不等于空格,游戏胜利
	return board[1][1];
	//判断是否平局
	if(1==isFull(board,ROW,COL))
	{
		return 'Q';//平局 
	}
	return 'C';//继续 
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0,y=0;
	printf("电脑走>:\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;
		}
	}
}


void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0,y=0;
	printf("玩家走>:\n");
	while(1)
	{
		printf("请输入坐标\n");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=ROW && y>=1&&y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入错误,请重新输入\n");
		}
	}
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<row-1)
		{
			for(j=0;j<col;j++)
			{
				printf("---");
				if(j<col-1)
				printf("|");
			}	
		}
		printf("\n");
	}
}


void Initboard(char board[ROW][COL],int row,int col)
{
	int i=0,j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}

void menu()
{
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}

void game()
{
//	printf("开始游戏\n");
	char ret=0;
	char board[ROW][COL]={0};//创建二维数组，存放走出的棋盘信息 
	Initboard(board,ROW,COL);//数组全部初始化为空格
	DisplayBoard(board,ROW,COL);//打印棋盘
	while(1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断玩家是否赢
		ret=isWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断电脑是否赢
		ret=isWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
		{
			printf("玩家赢\n");
		}
		else if(ret=='#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
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
		default:
			printf("请重新选择\n");
			break;
		}
	}while(input);
}
	

