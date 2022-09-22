#include <stdio.h>
#include <string.h> 
#include <windows.h>
#include <stdlib.h> 
int main()
{	
	{
		int x=7;
		int arr[]{1,2,3,4,5,6,7,8,9,10};
		int sz=sizeof(arr)/sizeof(arr[0]);
		int left=0;
		int right=sz-1;
		int mid=(left+right)/2;
		while(left<=right)
		{
		mid=(left+right)/2;
		if(arr[mid]>x)
		{
		right=mid-1;
		}
		else if(arr[mid]<x)
		{
		left=mid+1;
		}
		else 
		{
		printf("找到了，下标为：%d\n",mid);
		break;
		}	
		}
	if(left>right)
		{
			printf("找不到\n");
		}
	}
	printf("\n\n\n");
	
	{
		char arr2[]="##################";
		char arr1[]="welcome to bit !!!";//包含\0 
		int left=0;
//		int right=sizeof(arr1)/sizeof(arr2[0])-2;//下标减一，再减去\0 
		int right=strlen(arr1)-1;//strlen--计算字符串的个数--为库函数，需要声明、
		while(left<=right)
		{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2); 
		//休息一秒
//		Sleep(1000);//Sleep是一个库函数--休息/停留的意思需要声明windows.h为1000为毫秒  
//		system("cls");//system是一个库函数为执行命令的一个函数需要声明stdlib.h    命令--cls--清空屏幕 
		left++;
		right--;
		}
		printf("%s\n",arr2);
	}
	printf("\n\n\n"); 
	
	{	//输入三次密码如果错误则退出系统 
		int i;
		char password[20]={0};//声明一个密码 
		for(i=0;i<3;i++)
		{
			printf("请输入密码:>");
			scanf("%s",password);
			if(strcmp(password,"123456")==0)//strcmp--是一个库函数需要声明string.h  用于比较两个字符串 
			{//strcmp中的两个字符串相等则返回一个0，第一个大于第二个返回一个大于0的数字，反之返回一个小于0的数字 
				printf("登陆成功\n"); 
				break; 
			}
			else
			{
				printf("密码错误\n");
			}
		}
		if(i==3){//i==3的时候不再进入for循环则三次密码均错误 
			printf("三次密码均错误，退出程序");
		} 
	}	
	return 0;
}
