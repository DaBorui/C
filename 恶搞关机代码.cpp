#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//goto�����Ҫ�����������Ƕ�� 
	//cmd-command-������ 	
	//shutdown -s -t 60  shutdown -s(���ùػ�-����) -t(���õ�ʱ��)
	//system()-ִ��ϵͳ�����	  -a(ȡ���ػ�) 
	//cmd-command-������
	char input[20]={0}; 
	system("shutdown -s -t 60");
	while(1)
	{
		printf("��ĵ��Խ���һ���Ӻ�ػ�������>:���ǽ��/n������>:");
		scanf("%s",&input);
		if(strcmp(input,"����")==0)
		{
			system("shutdown -a"); 
			break;
		}	 
	} 
}
