#include <stdio.h>

int main()
{
    int num = 520;
    int *p = &num;
    int **pp = &p;

    printf("%u\n", pp);
    printf("%u", *pp);
    // printf("%d", pp);


}