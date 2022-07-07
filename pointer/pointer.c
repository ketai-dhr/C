#include <stdio.h>


int main()
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pd = &f;

    printf("%c", *pa);

    *pa = 'c';

    printf("%c", *pa); 
    printf("sizeof pa = %d", sizeof(pa));   

    return 0;
}