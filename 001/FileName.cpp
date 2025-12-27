//只写了第一题和第四题



//001
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	int count=0;
//	for (int i = 2; i < a; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count++;
//
//		}	
//	}
//	printf("%d", count);
//}


//004
#include<stdio.h>
#include<Windows.h>
 //冒泡排序各位数字
void sw(int arr[],int i)
{
	for (int f = 0; f < 3; f++)
	{

		for (int j = 0; j < 3 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

int main()
{
	int a;
	int n;
	scanf_s("%d%d",&a,&n);
	for (int i = 0; i <= n - 1; i++)
	{
		
		int g = a % 10;
		int s = (a / 10) % 10;
		int b = (a / 100) % 10;
		int q = (a / 1000) % 10;
		int arr[] = { g,s,b,q };
		sw(arr, i);//调用函数
		int max = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000;
		int min = arr[3] + arr[2] * 10 + arr[1] * 100 + arr[0] * 1000;
		a = max - min;
		printf("%d\n", a);
		//??如何重置arr[]数组？头大，逻辑没毛病啊！！！


	}
	
}




