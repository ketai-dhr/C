#include <stdio.h>

int main()
{
    int array[3][4] = {
        {1, 2, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 3, 1}};

    // int **p = array;
    int(*p)[4];
    // int i, j;

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("%2d ", *(*(p + i) + j));
    //     }
    //     printf("\n");
    // }
    printf("%p\n", *p);
    printf("%p", *p + 1);

    return 0;
}