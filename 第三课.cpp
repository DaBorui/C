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
		printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);
		break;
		}	
		}
	if(left>right)
		{
			printf("�Ҳ���\n");
		}
	}
	printf("\n\n\n");
	
	{
		char arr2[]="##################";
		char arr1[]="welcome to bit !!!";//����\0 
		int left=0;
//		int right=sizeof(arr1)/sizeof(arr2[0])-2;//�±��һ���ټ�ȥ\0 
		int right=strlen(arr1)-1;//strlen--�����ַ����ĸ���--Ϊ�⺯������Ҫ������
		while(left<=right)
		{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2); 
		//��Ϣһ��
//		Sleep(1000);//Sleep��һ���⺯��--��Ϣ/ͣ������˼��Ҫ����windows.hΪ1000Ϊ����  
//		system("cls");//system��һ���⺯��Ϊִ�������һ��������Ҫ����stdlib.h    ����--cls--�����Ļ 
		left++;
		right--;
		}
		printf("%s\n",arr2);
	}
	printf("\n\n\n"); 
	
	{	//����������������������˳�ϵͳ 
		int i;
		char password[20]={0};//����һ������ 
		for(i=0;i<3;i++)
		{
			printf("����������:>");
			scanf("%s",password);
			if(strcmp(password,"123456")==0)//strcmp--��һ���⺯����Ҫ����string.h  ���ڱȽ������ַ��� 
			{//strcmp�е������ַ�������򷵻�һ��0����һ�����ڵڶ�������һ������0�����֣���֮����һ��С��0������ 
				printf("��½�ɹ�\n"); 
				break; 
			}
			else
			{
				printf("�������\n");
			}
		}
		if(i==3){//i==3��ʱ���ٽ���forѭ����������������� 
			printf("��������������˳�����");
		} 
	}	
	return 0;
}
