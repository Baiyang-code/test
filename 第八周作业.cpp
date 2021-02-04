////#include<stdio.h>
////extern int add(int x, int y);
////int main()
////{
////	int a=1, b=2;
////	int sum = add(a, b);
////	printf("%d", sum);
////	return 0;
////}
////{
////	int i, a[10], b = 0,c[10];
////	for (i = 0; i < 10; i++)
////	{
////		scanf("%d", &a[i]);
////		if (a[i] % a[0] == 0)
////		{
////			b = b +a[i];
////			c[i]=a[i];
////		}
////	}
////	printf("%d\n", b);
////	printf("%d", c[i]);
////	return 0;
////}
////{
////	int a[10], i, max, min;
////	scanf("%d", &a[0]);
////	max = a[0];
////	min = a[0];
////	for (i = 1; i < 10; i++)
////	{
////		scanf("%d", &a[i]);
////		if (a[i] > max)
////			max = a[i];
////		if (a[i] < min)
////			min = a[i];
////	}
////	printf("最大值 is %d 最小值 is %d", max, min);
////	return 0;
////}
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
	}
	return 0;
}