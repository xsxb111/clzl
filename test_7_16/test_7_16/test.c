#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//实现对一个数组的冒泡排序
//void maop(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < sz -1- i; j++) {
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	maop(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//创建一个整型数组，实现对数组的操作
//实现函数Init()初始化数组为全0
//实现print（）；打印数组的每个元素
//实现reverse（），函数完成数组元素的逆置
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//交换数组
//将数组A中的内容和数组B中的内容进行交换
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d   %d\n", arr1[i], arr2[i]);
//	}
//	return 0;
//}