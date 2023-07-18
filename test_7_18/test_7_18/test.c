#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) 
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i]+j));
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i]==*(arr+i)==*(p+i)==p[i]
//	//	printf("%d ", p[i]);
//	//}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{}
//int main()
//{
//	char*(*pf)(char*, const char*);
//	char*(*my_strcpy[4])(char*, const char*);
//	return 0;
//}

//计算器
//void menu()
//{
//	printf("**********************\n");
//	printf("***  1.add  2.sub  ***\n");
//	printf("***  3.mul  4.div  ***\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//
//}
//int Div(int x, int y)
//{
//	return x / y;
//
//}
//int main()
//
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = 0;
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//void menu()
//{
//	printf("**********************\n");
//	printf("***  1.add  2.sub  ***\n");
//	printf("***  3.mul  4.div  ***\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//
//}
//int Div(int x, int y)
//{
//	return x / y;
//
//}
//int main()
//
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请选择两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请选择两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请选择两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请选择两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


void menu()
{
	printf("**********************\n");
	printf("***  1.add  2.sub  ***\n");
	printf("***  3.mul  4.div  ***\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;

}
int Sub(int x, int y)
{
	return x - y;

}
int Mul(int x, int y)
{
	return x * y;

}
int Div(int x, int y)
{
	return x / y;

}
void Calc(int(*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()

{
	int input = 0;

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}