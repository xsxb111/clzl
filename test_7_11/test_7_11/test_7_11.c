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


//д���뽫�������ְ��Ӵ�С���
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


//��ӡ3�ı���
//дһ�������ӡ1-100֮������3�ı���
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//���Լ��
//���������������������������Լ��
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


//��ӡ����
//��ӡ1000-2000��֮�������
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


//��ӡ����
//��ӡ100-200֮�������
//int main() {
//	//�Գ���
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


//��д������һ��1-100�����������г��ֶ��ٸ�����9
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


//����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ
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


//��ʮ�������е����ֵ
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


//����Ļ���9*9�˷��ھ���
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
////��������Ϸ
//void menu() {
//	printf("*************************\n");
//	printf("****  1.game 0.exit  ****\n");
//	printf("*************************\n");
//}
//
////RAND_MAX-32767
//void game() {
//	int guess = 0;
//	//����һ�������
//	int ret = 0;
//	ret = rand()%100+1;//����һ��1-100�����
//	//printf("%d\n", ret);
//	//������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//		}
//		else if (guess < ret) 
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("������\n");
//				break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	//ʱ���--��ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0��0��0��
//    //��ʱ����������������������ʼ��
//    //time_t time(time_t *timer)
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�˳�\n");
//			break;
//		default:
//			printf("�������\n");
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
//	printf("������������������Խ���120s�ڹػ�\n");
//	scanf("%s", ch);
//	if (0 == strcmp(ch, "������")) 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}