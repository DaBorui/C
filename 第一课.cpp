#include <stdio.h>
#include <math.h>
int main()
{
	//���ֵ�Ӵ�С���� 
//	{
//		int a,b,c;
//		int tmp;
//		scanf("%d%d%d",&a,&b,&c);
//		if(a<b)
//		{
//			tmp=a;
//			a=b;
//			b=tmp;
//		}
//		if(a<c)
//		{
//			tmp=a;
//			a=c;
//			c=tmp;
//		}
//		if(b<c)
//		{
//			tmp=b;
//			b=c;
//			c=tmp;
//		} 
//		printf("%d %d %d",a,b,c);
//	}
//	printf("\n\n\n");
	//�����ı��� 
//	{
//		int i;
//		i=3;
//		while(i%3==0)
//		{
//			printf("%d ",i);
//			i+=3;
//			if(i>100)
//			break;
//		}	
//	}
//	printf("\n\n\n");
	
	//��Լ����շת����� 
//	{
//		int m,n;
//		int r;
//		scanf("%d%d",&m,&n);
//		while((r=m%n) !=0)
//		{
//			//r=m%n;
//			m=n;
//			n=r;
//		}
//		printf("%d\n\n\n",n);
//	} 
//		printf("\n\n\n");
		
		//�ж��Ƿ�Ϊ���� 
//		{	
//			int year;
//			int count=0;
//			scanf("%d",&year);
//			if(year%4==0&&year%100!=0)
//			{
//				printf("%d ",year);
//			}
//			else if(year%400==0)
//			{
//				printf("%d ",year);
//			}
//			else
//			printf("����ݲ�������\n");
			//�ж�ʱ����ڵ�ʱ���Ƿ�Ϊ����
//			for(year=1000;year<=2000;year++)
//			{
//			 	if(year%4==0&&year%100!=0)//����һ 
//				{
//					printf("%d ",year);
//					count++;
//				}
//				else if(year%400==0)
//				{
//					printf("%d ",year);
//					count++;
//				}
				
//				if(((year%4==0)&&(year%100!=0))||(year%400==0))//������ 
//				{
//					printf("%d ",year);
//					count++;
//				}
//			}
//			printf("\n�����������:%d",count);
//		}
//		printf("\n\n\n");
		//����ֻ�ܱ�һ������������ 
		//�ж��Ƿ�Ϊ�����ķ���(1):�Գ��� 
		{
			int i;
			int j;
			int count=0;
			for(i=100;i<=200;i++)
			{
				for(j=2;j<=sqrt(i);j++)//sqrt��ѧ������ƽ�� 
				{
					if(i%j==0)
					{
						break;
					}	
				} 
				if(j>sqrt(i))
				{
					count++;
					printf("%d ",i);
				}
			} 
			printf("\n�������и���:%d\n\n\n",count);
		}
		//��������n�ְ취�кܶ� 
		 
		//����1/1-1/2+1/3-......+1/99-1/100��ֵ 
		{
			int i;
			double sum;
			int flag=1;
			for(i=1;i<=100;i++)
			{
				
				sum += flag * 1.0/i;//1/2�Ǹ����ͣ����Բ���double 
				flag= -flag;
			} 
			printf("%lf\n\n\n",sum);
		}
		
		//�������ڵ����ֵ 
		{
			int i;
			int arr[]={-5,-4,-3,-2,-1,0,1,2,3,4,5,};
			int max=arr[0];//���������ڵ����ֵΪarr[0] 
			int sz=sizeof(arr)/sizeof(arr[0]);//�������ַ��ĸ��� 
			for(i=1;i<sz;i++)
			{
				if(max<arr[i])
				{
					max=arr[i];
				}
			} 
			printf("%d\n\n\n",max);
		}
		//��ӡ�žų˷��� 
		{
			int i,j;
			for(i=1;i<=9;i++)//i������ 
			{
				for(j=1;j<=i;j++)//j������ 
				{
					printf("%d*%d=%-3d",i,j,i*j);//-3d�е�3�����ӡ��λ����-����������룬Ĭ��Ϊ�Ҷ��� 
				}
				printf("\n");
			}
		}	
} 
