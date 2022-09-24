 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 
//形参-只有在被调用的过程中才实例化，当调用完之后就被销毁了 
int get_max(int x,int y)
{
 	if(x<y)
 	{
 		return y;
	}
	else
		return x;
}

void Swap(int* pa,int* pb)//获取a,b,的地址 
{
	int tmp;
	tmp=*pa;//*pa-就是a的值 
	*pa=*pb;
	*pb=tmp ;
}
//是素数返回1,不是素数返回0 
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

int binary_search(int arr[],int k,int sz)//数组传过来的是数组内首个元素的地址,所以实质上arr表示的是一个指针 
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
		//strcpy-string copy-字符拷贝 
 		//strlen-string length--查看字符串长度 
 		char arr1[]="bit!";//结尾默认\0 
		char arr2[20]="########";//源头不可以比目的地长&&目的地要足够大 
		strcpy(arr2,arr1);//strcpy(拷贝目的地,拷贝源头)
		printf("%s\n\n",arr2); 
	}	
	
	//memset-内存-设置 
	{
		char arr[]="hello world";
		memset(arr,'*',5);//memset(指针-地址,int-整形,int-修改个数) 
		printf("%s\n\n",arr);
	}
	
	//定义函数 
	{
		{
			int a=10,b=20;
			int max=get_max(a,b); 
			printf("%d\n\n",max);
		}
		//函数的调用分为传值调用和传址调用
		//传址调用可以让函数和函数外部的变量建立起联系，也就是函数内部可以直接操作函数外部 
		{
			int a=10,b=20;
			printf("a=%d b=%d\n",a,b);
			Swap(&a,&b);//交换值的时候，参数为a,b的地址 
			printf("a=%d b=%d\n\n",a,b);
		}
		//判断100到200之间的值是否为素数 
		{
			int i;
			int count=0;
			for(i=100;i<=200;i++)
			{
				if(in_prime(i) == 1)//in_prime()专门判断素数的自定义函数
				{//in_primr(i),如果为素数则返回1,反之返回0 
					count++;
					printf("%d ",i);
				}
			}
			printf("\n共有素数:%d\n\n",count);
		}
		
		//写一个判断是否为闰年的函数 
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
		
		//写一个实现一个整型有序数组的二分查找的函数 
		{
			int arr[]={1,2,3,4,5,6,7,8,9,10};
			int arr1[]={11,12,13,14,15,16,17,18,19,20}; 
			int k=7;
			int i=15;
			int sz=sizeof(arr)/sizeof(arr[0]);
			int sz1=sizeof(arr)/sizeof(arr1[0]);
			int ret1=binary_search(arr1,i,sz1);
			int ret=binary_search(arr,k,sz);//数组在传参的时候,传过去的是数组的首个元素的地址 
			printf("找到了,k的下标为%d\n",ret);
			printf("找到的值:%d\n",arr[ret]);
			printf("找到了,i的下标为%d\n",ret1);
			printf("找到的值:%d\n\n",arr1[ret1]);
		}
		
		//写一个函数，每调用一次这个函数，sum的值增加一
		{
			int sum=0;
			Add(&sum);
			printf("%d\n",sum);
			Add(&sum);
			printf("%d\n",sum);
			Add(&sum);
			printf("%d\n\n",sum);
		}
		//函数与函数之间是可以有机组合的 
		
		//链条访问
		{
			printf("%d",printf("%d",printf("%d",43))); //printf的返回值为打印字符的个数 
		} 
	}	
} 
