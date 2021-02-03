#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int arr[4][4];
    int i, j, k,l,n;
    int min, max,add=0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0; i < 4; i++)
    {
        max = arr[i][0];
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                n = i;
                l = j;
            }      
        } 
        min = max;
        for (k = 0; k < 4; k++)
        {
           
            if (arr[k][l] < min)
                break;
            if(arr[k][l]>=min && k==3)
            {
                printf("a[%d][%d]=%d", n, l, arr[n][l]);
                add++;
                break;
            }
        }
    }
    if (add == 0)
        printf("It is not exist!");


    return 0;
}
//#include <math.h>
//int main()
//{
//    int n, m, i, j;
//    int a = 0;
//    int sub[1000];
//    int count = 0;
//    int arr[1000];
//    scanf("%d%d", &n, &m);
//
//    for (i = n; i <=m; i++)
//    {
//        for (j = 2; j < sqrt(i); j++)
//        {
//            if (i % j == 0)
//                break;            
//        }
//        if (j > sqrt(i)&&i!=1)
//        {
//            arr[count] = i;
//            count++;
//        }
//        else
//        {
//            continue;
//        }
//    }
//    for (i = 1; i < count; i++)
//    {
//        if (arr[i] - arr[i - 1] == 2)
//        {
//            sub[a] = arr[i - 1];
//            sub[a + 1] = arr[i];
//            a=a+2;
//        }
//    }
//    for (i = 0; i < a; i=i+2)
//    {
//        if (i + 2 == a)
//        {
//            printf("(%d,%d)", sub[i], sub[i + 1]);
//            break;
//        }
//        else
//            printf("(%d,%d) ", sub[i], sub[i + 1]);
//    }
//    return 0;
//}