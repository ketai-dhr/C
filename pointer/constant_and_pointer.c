#include <stdio.h>

int main()
{
    // const float pi = 3.14;

    // // printf("%f", pi);

    int num = 520;
    const int cnum = 888;

    const int *pc = &cnum;
    printf("%u ", pc);
    printf("%u\n", &cnum);

    pc = &num;

    num = 1024; 
    printf("*pc%d", *pc);

    // int * const p = &num;

    // *p = 1024;

    // p = &cnum;
    // printf("%d\n", *p);
    

}