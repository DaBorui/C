 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 
//�β�-ֻ���ڱ����õĹ����в�ʵ��������������֮��ͱ������� 
int get_max(int x,int y)
{
 	if(x<y)
 	{
 		return y;
	}
	else
		return x;
}

void Swap(int* pa,int* pb)//��ȡa,b,�ĵ�ַ 
{
	int tmp;
	tmp=*pa;//*pa-����a��ֵ 
	*pa=*pb;
	*pb=tmp ;
}
//����������1,������������0 
int in_prime(int n)
{
	int m;
	for(m=2;m<=sqrt(n);m++)
	{
		if((n%m) == 0)
		return 0;
	}
	return 1;	
}

int is_leap_year(int y)
{
	if((y%4==0&&y%100!=0) || y%400==0)
	{
		return 1;
	}
	else
		return 0;
}

int binary_search(int arr[],int k,int sz)//���鴫���������������׸�Ԫ�صĵ�ַ,����ʵ����arr��ʾ����һ��ָ�� 
{
	int left=0;
	int right=sz-1;
	int mid=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
			return mid;
	}
	return 0;
}

int Add(int* p)
{
	(*p)++;
}

 int main()
{
	{
		//strcpy-string copy-�ַ����� 
 		//strlen-string length--�鿴�ַ������� 
 		char arr1[]="bit!";//��βĬ��\0 
		char arr2[20]="########";//Դͷ�����Ա�Ŀ�ĵس�&&Ŀ�ĵ�Ҫ�㹻�� 
		strcpy(arr2,arr1);//strcpy(����Ŀ�ĵ�,����Դͷ)
		printf("%s\n\n",arr2); 
	}	
	
	//memset-�ڴ�-���� 
	{
		char arr[]="hello world";
		memset(arr,'*',5);//memset(ָ��-��ַ,int-����,int-�޸ĸ���) 
		printf("%s\n\n",arr);
	}
	
	//���庯�� 
	{
		{
			int a=10,b=20;
			int max=get_max(a,b); 
			printf("%d\n\n",max);
		}
		//�����ĵ��÷�Ϊ��ֵ���úʹ�ַ����
		//��ַ���ÿ����ú����ͺ����ⲿ�ı�����������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ 
		{
			int a=10,b=20;
			printf("a=%d b=%d\n",a,b);
			Swap(&a,&b);//����ֵ��ʱ�򣬲���Ϊa,b�ĵ�ַ 
			printf("a=%d b=%d\n\n",a,b);
		}
		//�ж�100��200֮���ֵ�Ƿ�Ϊ���� 
		{
			int i;
			int count=0;
			for(i=100;i<=200;i++)
			{
				if(in_prime(i) == 1)//in_prime()ר���ж��������Զ��庯��
				{//in_primr(i),���Ϊ�����򷵻�1,��֮����0 
					count++;
					printf("%d ",i);
				}
			}
			printf("\n��������:%d\n\n",count);
		}
		
		//дһ���ж��Ƿ�Ϊ����ĺ��� 
		{
			int year;
			int ret=0;
			int count=0;
			for(year=1000;year<=2000;year++)
			{
				if(is_leap_year(year)==1){
					printf("%d ",year);
					count++;
				}
			}
			printf("\n%d\n\n",count);
		}
		
		//дһ��ʵ��һ��������������Ķ��ֲ��ҵĺ��� 
		{
			int arr[]={1,2,3,4,5,6,7,8,9,10};
			int arr1[]={11,12,13,14,15,16,17,18,19,20}; 
			int k=7;
			int i=15;
			int sz=sizeof(arr)/sizeof(arr[0]);
			int sz1=sizeof(arr)/sizeof(arr1[0]);
			int ret1=binary_search(arr1,i,sz1);
			int ret=binary_search(arr,k,sz);//�����ڴ��ε�ʱ��,����ȥ����������׸�Ԫ�صĵ�ַ 
			printf("�ҵ���,k���±�Ϊ%d\n",ret);
			printf("�ҵ���ֵ:%d\n",arr[ret]);
			printf("�ҵ���,i���±�Ϊ%d\n",ret1);
			printf("�ҵ���ֵ:%d\n\n",arr1[ret1]);
		}
		
		//дһ��������ÿ����һ�����������sum��ֵ����һ
		{
			int sum=0;
			Add(&sum);
			printf("%d\n",sum);
			Add(&sum);
			printf("%d\n",sum);
			Add(&sum);
			printf("%d\n\n",sum);
		}
		//�����뺯��֮���ǿ����л���ϵ� 
		
		//��������
		{
			printf("%d",printf("%d",printf("%d",43))); //printf�ķ���ֵΪ��ӡ�ַ��ĸ��� 
		} 
	}	
} 
