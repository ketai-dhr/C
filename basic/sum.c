#include <stdio.h>

int sum(int n)
{
    int result = 0;

    do
    {
        /* code */
        result += n;
    } while (n-- > 0);

    return result;
}

int main()
{
    int n, result;
    scanf("%d", &n);

    result = sum(n);
    printf("result is : %d ", result);
}