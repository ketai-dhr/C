#include <stdio.h>

int main()
{
    int n, i;
    
    printf("�������ַ�������");
    scanf("%d", &n);
    getchar();
    char a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    a[n] = '\0';
    printf("�ַ�����:%s", &a);
}