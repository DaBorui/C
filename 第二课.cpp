#include <stdio.h>
int main()
{
	//getchar()������ 
//	{
//		int ch;
//		int ret;
//		char password[20]{0};//passwordΪ���� ������һ���ַ� 
//		printf("���������룺");
//		scanf("%s",password);
//		while((ret=getchar()) !='\n')//����whileѭ����getcharѭ�������ݻ������е����ݶ���ȡ 
//		{
//			;
////			putchar(ret);
//		}
//		printf("��ȷ�ϣ�Y/N��");
//		ch=getchar();//getchar��ȡһ���ַ���ֵ��ch 
//		if(ch=='Y')
//		printf("ȷ�ϳɹ�");
//		else
//		printf("����ȷ��");
//	}
//	
//	{
//		int ch;
//		while((ch=getchar()) !=EOF)
//		{
//			if(ch<'0' || ch>'9')
//			continue;
//			putchar(ch); 
//		}
//	}
	
	//forѭ�� 
	{
		int i=0;
		// ��ʼ�� �ж�   ���� 
		for(i=0 ; i<=10 ; i++)//������ѭ�����ڸı�ѭ����������ֹforѭ��ʧ�� 
		{//����forѭ�����á�ǰ�պ����䡱��д�� 
			printf("%d ",i); 
		}	
		printf("\n\n\n");
		//forѭ����ʼ�����жϣ���������ʡ��
		//�жϲ��������ʡ�ԣ��� 
//		for(;;){
//			printf("hehe\n");
//		}
	}
	//do...whileѭ�� 
	{//do...whileѭ�����ص�����ѭ��һ�� 
		int i=1;
		do{//��ѭ��һ�����ж� 
			printf("hehe ");
			i++;
		} 
		while(i<=10);
	}
	printf("\n\n\n");
	
	{
		int ret=1;
		int i;
		int n;
		int sum=0;
//		scanf("%d",&n);//��n�Ľ׳� 
		for(n=1;n<=10;n++) //��10֮ǰ�Ľ׳���� 
		{
			ret=1;
			for(i=1;i<=n;i++){//��n�Ľ׳� 
			ret=ret*i; //��n�Ľ׳� 
		}//��n�Ľ׳� 
		sum=sum+ret;//��10֮ǰ�Ľ׳���� 
//			printf("%d ",i);	
		}
		printf("%d ",sum);//��10֮ǰ�Ľ׳���� 
//		printf("%d ",ret);
	}
	printf("\n\n\n");
	//��10֮ǰ�Ľ׳���ӵ��Ż� 
	{
		int n;
		int ret=1;
		int sum=0;
		for(n=1;n<=10;n++)
		{
			ret=ret*n;
		} 
		sum=sum+ret;
	} 


	 
	
	
	
	
} 
