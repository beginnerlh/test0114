//罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
//
//	字符          数值
//	I             1
//	V             5
//	X             10
//	L             50
//	C             100
//	D             500
//	M             1000
//	例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
//
//	通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，
//	例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。
//	同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//
//	I 可以放在 V(5) 和 X(10) 的左边，来表示 4 和 9。
//	X 可以放在 L(50) 和 C(100) 的左边，来表示 40 和 90。
//	C 可以放在 D(500) 和 M(1000) 的左边，来表示 400 和 900。
//	给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int romanToInt(char* s) 
{
	int b = 0;//多少位字符串
	int a = 0;//结果
	for (; s[b] != '\0'; b++);//计算字符数量
	for (int i = 0; i<b; i++)
	{
		if (i == b - 1)
		{
			if (s[i] == 'M')
			{
				a += 1000;
			}
			if (s[i] == 'D')
			{
				a += 500;
			}
			if (s[i] == 'C')
			{
				a += 100;
			}
			if (s[i] == 'L')
			{
				a += 50;
			}
			if (s[i] == 'X')
			{
				a += 10;
			}if (s[i] == 'V')
			{
				a += 5;
			}
			if (s[i] == 'I')
			{
				a += 1;
			}
			break;
		}
		if ((s[i] == 'I'&&s[i + 1] == 'V') || (s[i] == 'I'&&s[i + 1] == 'X'))
		{

			a -= 1;
			continue;
		}
		if ((s[i] == 'X'&&s[i + 1] == 'L') || (s[i] == 'X'&&s[i + 1] == 'C'))
		{

			a -= 10;
			continue;
		} if ((s[i] == 'C'&&s[i + 1] == 'D') || (s[i] == 'C'&&s[i + 1] == 'M'))
		{

			a -= 100;
			continue;
		}
		if (s[i] == 'M')
		{
			a += 1000;
		}
		if (s[i] == 'D')
		{
			a += 500;
		}
		if (s[i] == 'C')
		{
			a += 100;
		}
		if (s[i] == 'L')
		{
			a += 50;
		}
		if (s[i] == 'X')
		{
			a += 10;
		}if (s[i] == 'V')
		{
			a += 5;
		}
		if (s[i] == 'I')
		{
			a += 1;
		}
	}
	return a;
}
int main()
{
	char s[1000] = { 0 };
	printf("请输入罗马数字-> ");
	while (1)
	{
		scanf("%s", &s);
		int a = romanToInt(s);
		if (a<3999 && a>1)
		{
			printf("%d\n", a);
			break;
		}
		else
		printf("输入有误！请重新输入->");
	}
	system("pause");
	return 0;
}


