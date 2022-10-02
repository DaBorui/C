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
	//������ 
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')//������ͬ�Ҳ����ڿո�,��Ϸʤ��
		{
			return board[i][1];
		}
	}
	//������ 
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')//������ͬ�Ҳ����ڿո�,��Ϸʤ��
		{
			return board[1][i];
		}
	}
	//�����Խ��� 
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')//������ͬ�Ҳ����ڿո�,��Ϸʤ�� 
	return board[1][1];
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')//������ͬ�Ҳ����ڿո�,��Ϸʤ��
	return board[1][1];
	//�ж��Ƿ�ƽ��
	if(1==isFull(board,ROW,COL))
	{
		return 'Q';//ƽ�� 
	}
	return 'C';//���� 
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0,y=0;
	printf("������>:\n");
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
	printf("�����>:\n");
	while(1)
	{
		printf("����������\n");
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
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("�������,����������\n");
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
//	printf("��ʼ��Ϸ\n");
	char ret=0;
	char board[ROW][COL]={0};//������ά���飬����߳���������Ϣ 
	Initboard(board,ROW,COL);//����ȫ����ʼ��Ϊ�ո�
	DisplayBoard(board,ROW,COL);//��ӡ����
	while(1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�ж�����Ƿ�Ӯ
		ret=isWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�жϵ����Ƿ�Ӯ
		ret=isWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
		{
			printf("���Ӯ\n");
		}
		else if(ret=='#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
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
		default:
			printf("������ѡ��\n");
			break;
		}
	}while(input);
}
	

