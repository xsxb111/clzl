#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include<math.h>

//int main() {
//	int x = 0;
//	int y = 1;
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		y = 1;
//		for (a = 1; a <= i; a++)
//		{	
//			y *= a;
//		}
//		x += y;
//	}
//	printf("%d", x);
//	return 0;
//}


//写代码将三个数字按从大到小输出
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		num = a;
//		a = b;
//		b = num;
//	}
//	if (a < c) {
//		num = a;
//		a = c;
//		c = num;
//	}
//	if (b < c) {
//		num = b;
//		b = c;
//		c = num;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//打印3的倍数
//写一个代码打印1-100之间所有3的倍数
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//最大公约数
//给定两个数，求这两个数的最大公约数
//int main() {
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n) {
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}


//打印闰年
//打印1000-2000年之间的闰年
//int main() {
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//打印素数
//打印100-200之间的素数
//int main() {
//	//试除法
//	int i = 0;
//	for (i = 100; i <= 200; i++)//for(i = 101;i<=200;i+=2)
//	{
//		int x = 0;
//		for (x = 2; x < i; x++) 
//		{
//			if (i%x == 0) 
//			{
//				break;
//			}
//		}
//		if (x == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//编写程序数一下1-100的所有整数中出现多少个数字9
//int main() 
//{
//	int i = 0;
//	int count = 0;
//	for (i =0;i<=100;i++)
//	{
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			sum -= 1.0 / i;
//		}
//		else {
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}


//求十个整数中的最大值
//int main() {
//	int arr[] = {0,1,2,3,4,5,6,7,8,9 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//在屏幕输出9*9乘法口诀表
//main() {
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++) {
//		for (y = 1; y <= x; y++) {
//			printf("%d*%d=%-2d ", x, y,x*y);
//			if (x == y) {
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}


//#include<stdlib.h>
//#include<time.h>
////猜数字游戏
//void menu() {
//	printf("*************************\n");
//	printf("****  1.game 0.exit  ****\n");
//	printf("*************************\n");
//}
//
////RAND_MAX-32767
//void game() {
//	int guess = 0;
//	//生成一个随机数
//	int ret = 0;
//	ret = rand()%100+1;//生成一个1-100随机数
//	//printf("%d\n", ret);
//	//猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else if (guess < ret) 
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜中了\n");
//				break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	//时间戳--当前计算机的时间减去计算机的起始时间（1970.1.1.0：0：0）
//    //拿时间戳来设置随机数的生成起始点
//    //time_t time(time_t *timer)
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}


//#include<stdlib.h>
//int main() 
//{
//	char ch[20] = {0};
//	system("shutdown -s -t 120");
//again:
//	printf("请输入我是猪，否则电脑将在120s内关机\n");
//	scanf("%s", ch);
//	if (0 == strcmp(ch, "我是猪")) 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}