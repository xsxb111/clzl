#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[], int sz) 
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++) //n个元素，需排n-1趟
	{
		int x = 0;
		for (x = 0; x < sz - 1 - i; x++) 
		{
			if (arr[x] > arr[x + 1]) 
			{
				int tem = arr[x];
				arr[x] = arr[x+1];
				arr[x + 1] = tem;
				flag = 0;
			}

		}
		if (flag == 1) {
			break;
		}
	}

}
int main() 
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//10个元素 排9趟
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}