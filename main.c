#include<stdio.h>
int main()
{
	/*char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));*/
	/*double d = 1E10;
	printf("%lf", d);
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);*/
	char* p2 = "abcdef";
	char* p1 = "abcdef";
	if (p1 == p2)
		printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}