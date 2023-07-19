#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//void qsort(void* base, size_t num, size_t size,int(*compar)(const void*, const void*));
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组元素个数
//第三个参数：待排序数组的每个元素大小-单位是字节
//第四个参数：是函数指针，比较两个元素所用函数的地址--自己实现
//            函数指针的两个参数是：待比较的两个元素的地址

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1() 
{
	int arr[] = { 9,8,7,6,5,3,4,2,4,1,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1,const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
void test2()
{
	float f[] = { 9.0,5.0,6.0,4.5,9.2 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

struct Stu {
	char name[20];
	int age;
};
int cmp_stu_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
}
void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}
void test4()
{
	int arr[] = { 9,8,7,6,5,3,4,2,4,1,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
void test5()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_age);
}
int main()
{
	//test1();
	//test2();
	test4();
	return 0;
}