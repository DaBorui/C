#include <stdio.h>
#include <string.h> 

void bubble_sort(int* arr,int sz)
{
	//确定冒泡排序的趟数 
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		//每趟冒泡排列 
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
	//一维数组的创建和初始化 
//	{//创建数组  typo_t-数组的类型   arr_name-数组的名字  [const_n]-const_n是一个常量表达式,用来指定数组的大小
//		//[]-下标访问操作符 		数组名就是首元素的地址 
//		char arr[]="abc";
//		char arr1[]={'a','b','c'};
//		printf("%d ",sizeof(arr));
//		printf("%d ",sizeof(arr1));
//		printf("%d ",strlen(arr));
//		printf("%d ",strlen(arr1));
//	}
//	printf("\n\n");
	//二维数组 
//	{	//1.sizeof(数组名)-数组名代表整个数组,sizeof(数组名)计算的是整个数组的大小,单位是字节 
		//2.&(数组名)-数组名代表整个数组-取出的是整个数组的地址 
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
	//冒泡排序 
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
