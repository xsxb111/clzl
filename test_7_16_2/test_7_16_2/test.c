#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//����int����m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ
//int get_bit(int m ,int n)
//{
//	int x = 0;
//	x = m ^ n;
//	int count = 0;
//	while(x)
//	{
//		x = x&(x - 1);
//		count++;
//    }
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_bit(m,n);
//	printf("%d", count);
//	return 0;
//}



//дһ���������ز�����������1�ĸ���
//int count_one(unsigned int i)
//{
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1) {
//			count++;
//		}
//		i = i / 2;
//	}
//	return count;
//}

//int count_one(int i)
//{
//	//13
//	//00000000000000000000000000001101
//	int j = 0;
//	int count = 0;
//	for (j = 0; j < 32; j++) 
//	{
//		if ((i >> j) & 1 == 1) {
//			count++;
//		}
//	}
//	return count;
//}

//n 13
//1101
//n-1
//1100
//n%(n-1)
//1100  n
//1011  n-1
//1000  n
//0111  n-1
//0000
//n&n-1�ͻ���ȥ���ұߵ�1
//int count_one(int i)
//{
//	int count = 0;
//	while(i)
//	{
//		i = i&(i - 1);
//		count++;
//    }
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int count = count_one(i);
//	printf("%d", count);
//}


//��ȡһ�����������Ƶ����е�ż��λ������λ���ֱ��ӡ������������
//10
//00000000000000000000000000001010
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",(m >> i)&1);
//	}
//	printf("\nż��λ��");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//��������ʱ����������������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//
//}


