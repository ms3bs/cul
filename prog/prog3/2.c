//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//const int EF = 1000000000;
//const int k = 10;
//struct f {
//	int a[];
//};
//void v(struct f* x)
//{
//	char a[3000];
//	int i = 1, n, b, c, d = k + 1;
//	scanf("%c", &a[i]);
//	while (a[i] != '\n')
//	{
//		i += 1;
//		scanf("%c", &a[i]);
//	}
//	n = i - 1;
//	for (int i = 1; i <= k; i++)
//	{
//		x->a[i] = 0;
//	}
//	for (i = n; i >= 1; i--)
//	{
//		if ((n - i) % 9 == 0)
//		{
//			c = 1;
//			d = d - 1;
//		}
//		b = a[i] - 48;
//		x->a[d] += b * c;
//		c *= 10;
//	}
//}
//void p(struct f* x)
//{
//	int d, c, b = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		d = x->a[i];
//		c = EF / 10;
//		for (int j = 0; j < 9; j++)
//		{
//			if (d / c != 0 || b == 1)
//			{
//				printf("%d", d / c);
//				b = 1;
//			}
//			d = d % c;
//			c = c / 10;
//		}
//	}
//}
//struct f* pl(struct f* x, struct f* y)
//{
//	struct f* z = malloc(sizeof(struct f) + 200);
//	int b = 0;
//	for (int i = k; i >= 1; i--)
//	{
//		z->a[i] = (x->a[i] + y->a[i] + b) % EF;
//		b = (x->a[i] + y->a[i] + b) / EF;
//	}
//	return z;
//}
//struct f* m(struct f* x, struct f* y)
//{
//	struct f* z = malloc(sizeof(struct f) + 100);
//	for (int i = 1; i <= k; i++)
//	{
//		z->a[i] = 0;
//	}
//	int b = 0;
//	for (int i = k; i >= 1; i--)
//	{
//		if (x->a[i] - y->a[i] - b < 0)
//		{
//			z->a[i] = EF + x->a[i] - y->a[i] - b;
//			b = 1;
//		}
//		else
//		{
//			z->a[i] = x->a[i] - y->a[i] - b;
//			b = 0;
//		}
//	}
//	return z;
//
//}
//struct f* g(int y)
//{
//	struct f* x = malloc(sizeof(struct f) + 100);
//	x->a[k] = y % EF;
//	x->a[k - 1] = y / EF;
//	for (int i = 1; i < k - 1; i++)
//	{
//		x->a[i] = 0;
//	}
//	return x;
//}
//struct f* mu(struct f* x, struct f* y)
//{
//	struct f* z = malloc(sizeof(struct f) + 200);
//	for (int i = 1; i <= k; i++)
//	{
//		z->a[i] = 0;
//	}
//	int b = 0, d;
//	for (int i = k; i >= 1; i--)
//	{
//		d = x->a[i];
//		for (int j = 1; j <= 9; j++)
//		{
//
//		}
//	}
//	return z;
//}
//int main()
//{
//	struct f* x = malloc(sizeof(struct f) + 200);
//	struct f* y = malloc(sizeof(struct f) + 200);
//	struct f* z = malloc(sizeof(struct f) + 200);
//	v(x);
//	v(y);
//	z = mu(x, y);
//	p(z);
//	return 0;
//}