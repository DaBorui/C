#include <stdio.h>
int main()
{
	//if����ʹ��   
	{//{}Ϊһ�������
	int a=12;
	if(a<18)
		printf("δ����\n");
	else//else�������if���ƥ�� 
		printf("����\n"); 
	}
	printf("\n");
	
	{
		int i;
		for(i=0;i<=100;i++)//����forѭ�����1-100 
		{
			if(i%2==1)//�ж�һ�����Ƿ�Ϊ���� 
				printf("%d ",i); //�ж�Ϊ�������i 
		} 
		printf("\n\n");
	}
		
		
	//switch����ʹ�� 
//	{
//		int day;
//		scanf("%d",&day);
//		if (day%7==0)
//		printf("����7"); 
//		switch(day%7)//switch����ڿ��Գ���if��� 
//		{//case :����������γ������ʽ��
//			//��䣻 
//			case 1: 
//				printf("����1\n"); 
//				if(day==1)//switch����ڿ��Գ���if��� 
//				printf("hehe\n");//switch�������Ƕ��switch��� 
//				break; 
//			case 2:
//				printf("����2\n");
//				break;
//			case 3:
//				printf("����3\n");
//				break;
//			case 4:
//				printf("����4\n"); 
//				break;
//			case 5:
//				printf("����5\n"); 
//				break;
//			case 6:
//				printf("����6\n");
//				break; 
//			case 7:
//				printf("����7\n");
//				break;
////			default:
////				printf("�������"); 
////				break; 
//		 } 
//		 printf("\n"); 
//		 }
//continue������ֹ����ѭ����continue��Ĵ��벻��ִ�У�����ֱ����ת��while�ж����Ĳ��� ��������һ��ѭ���������ж�		 
//break����������ֹѭ�� 
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
			//EOF--end of file(�ļ�������־) -> -1 
			while((ch=getchar()) !=EOF)//getchar���Խ��ܼ����ϵ�һ���ַ�  getchar���� 
			{ 
				putchar(ch);//putcharΪ��� putchar(ch);ȫ��printf("%c\n",ch); 
			}
			
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
