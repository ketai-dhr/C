#include <stdio.h>

int main()
{
    int n, i;
    
    printf("请输入字符个数：");
    scanf("%d", &n);
    getchar();
    char a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    a[n] = '\0';
    printf("字符串是:%s", &a);
}