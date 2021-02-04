//1.编写一个子函数，用来计算两个整数的和。
//编写主程序，从键盘读入2个整数，
//调用子函数，计算并输出这2个整数的和。
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = add(a, b);
//	printf("%d", c);
//	return 0;
//}
//2.编写一个程序，包括主函数main和子函数min。
//子函数的输入参数是2个整数，返回的也是整数
//，是这2个整数中的最小值。
//主函数中读入4个整数，调用子函数min，输出4个数中的最小值。
//#include<stdio.h>;
//
// int min(int x, int y)
//{
//	int z;
//	if (x<y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main(void)
//{
//	int a, b, c, d, min1;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	min1 = min(min(a, b), min(c, d));
//	printf("%d", min1);
//}
#include <stdio.h>
#include <string.h>
struct Stu/*定义结构体数组用于缓存数据*/
{
    char arr[11];
    char num[10];
    int math;
    int eng;
    int com;
    int phy;
};

int main()
{
    int n, i, sum = 0;
    char ret[10];
    struct Stu s[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i].arr);
        scanf("%s", s[i].num);
        scanf("%d", &s[i].math);
        scanf("%d", &s[i].eng);
        scanf("%d", &s[i].com);
        scanf("%d", &s[i].phy);
    }
    scanf("%s", ret);
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].num, ret) == 0)
        {
            printf("%-2s %2s %d %d %d %d", s[i].arr, s[i].num, s[i].math, s[i].eng, s[i].com, s[i].phy);
            sum++;
        }
    }
    if (sum == 0)
        printf("Not Found！");
    return 0;
}
