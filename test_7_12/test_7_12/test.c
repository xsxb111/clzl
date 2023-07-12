#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>

////定义一个函数，判断一个数是不是素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++) {
//		if (x % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//	//if (x == i) {
//	//	return 1;
//	//}
//}
//int main() 
//{
//	int get = 0;
//	scanf("%d", &get);
//	if(1==is_prime(get)){
//       printf("%d是素数",get);    
//}
//	return 0;
//}


//写一个函数，判断一年是不是闰年
//int is_leap_year(int x) {
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if (1 == is_leap_year(year)) {
//		printf("%d是闰年", year);
//	}
//	else {
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}


////写一个函数，实现一个整型有序数组的二分查找
////            arr本质上是一个指针
//int binary_search(int arr[],int k,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int sz = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	sz = sizeof(arr) / arr[0];
//	int k = 0;
//	scanf("%d", &k);
//	int ret = binary_search(arr, k,sz);//数组传参仅仅传入第一个元素的地址
//	if (ret == -1) {
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标是%d", ret);
//	}
//	return 0;
//}


//写一个函数，每调用一次这个函数，就会使num的值+1
//void add(int* p) {
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//接受一个整型值（无符号），按照顺序打印它的每一位。
//void print(int x) {
//	if (x > 9) {
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	print(x);
//	return 0;
//}


////编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	if (*str != '\0') 
//		return 1 + my_strlen(str + 1);
//	else 
//		return 0;
//}
//int main() 
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//传入的是字符数组的第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}


////求n的阶乘
int Fac1(int n) {
	if (n <= 1)
		return 1;
	else
		return n * Fac1(n - 1);
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int ret = Fac1(n);
	printf("%d", ret);
	return 0;
}


//求第n个斐波那契数。（不考虑溢出）
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}