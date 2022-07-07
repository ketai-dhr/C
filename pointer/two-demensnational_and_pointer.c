#include <stdio.h>

int main()
{
    int array[4][5] = {0};

    // printf("sizeof int:%d\n", sizeof(int));
    // printf("array: %p\n", array);
    // printf("array + 1:%p\n",array+1);
    int i, j, k = 0;

    for (i = 0;i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            array[i][j] = k++;
        }
    } 

    // printf("%p", &array[1][2]);

    printf("%d", *(*(array+1)+3));
    return 0;
}