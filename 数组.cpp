#include <stdio.h>
#include <string.h> 

void bubble_sort(int* arr,int sz)
{
	//ȷ��ð����������� 
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		//ÿ��ð������ 
		int flag=1;
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=0;
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
}

int main()
{
	//һά����Ĵ����ͳ�ʼ�� 
//	{//��������  typo_t-���������   arr_name-���������  [const_n]-const_n��һ���������ʽ,����ָ������Ĵ�С
//		//[]-�±���ʲ����� 		������������Ԫ�صĵ�ַ 
//		char arr[]="abc";
//		char arr1[]={'a','b','c'};
//		printf("%d ",sizeof(arr));
//		printf("%d ",sizeof(arr1));
//		printf("%d ",strlen(arr));
//		printf("%d ",strlen(arr1));
//	}
//	printf("\n\n");
	//��ά���� 
//	{	//1.sizeof(������)-������������������,sizeof(������)���������������Ĵ�С,��λ���ֽ� 
		//2.&(������)-������������������-ȡ��������������ĵ�ַ 
//		int i=0;
//		int sz=0;
//		int arr[2][4] ={{1,2,3},{4,5,6}};
//		sz=sizeof(arr)/sizeof(arr[0]);
//		for(i=0;i<sz;i++)
//		{
//			int j;
//			for(j=0;j<4;j++)
//			{
//				printf("%d ",arr[i][j]);
//			}		
//		}
//	}
	//ð������ 
	{
		int i=0;
		int arr[]={10,9,8,7,6,5,4,3,2,1};
		int sz=sizeof(arr)/sizeof(arr[0]);
		bubble_sort(arr,sz);
		for(i=0;i<sz;i++)
		{
			printf("%d ",arr[i]);
		} 
	}	
}
