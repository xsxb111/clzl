#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<string.h>

////����һ���������ж�һ�����ǲ�������
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
//       printf("%d������",get);    
//}
//	return 0;
//}


//дһ���������ж�һ���ǲ�������
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
//		printf("%d������", year);
//	}
//	else {
//		printf("%d��������", year);
//	}
//	return 0;
//}


////дһ��������ʵ��һ��������������Ķ��ֲ���
////            arr��������һ��ָ��
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
//	int ret = binary_search(arr, k,sz);//���鴫�ν��������һ��Ԫ�صĵ�ַ
//	if (ret == -1) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	return 0;
//}


//дһ��������ÿ����һ������������ͻ�ʹnum��ֵ+1
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


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
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


////��д��������������ʱ���������ַ����ĳ���
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
//	int len = my_strlen(arr);//��������ַ�����ĵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}


////��n�Ľ׳�
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


//���n��쳲����������������������
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