#include <stdio.h>

int main()
{
    int array[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int (*p)[3] = array;

    printf("%d\n", **(p+1));
    printf("%d\n", **(array+1));
    printf("%d\n", array[1][0]);
    printf("%d\n", *(*(p+1)));
}