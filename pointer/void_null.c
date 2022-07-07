#include <stdio.h>

int main()
{
    // void *a;
    // int num = 1024;
    // int *pi = &num;
    // char *ps = "Fish";
    // void *pv = pi;
    // pv = ps;
    // printf("%p %p", ps, pv);
    // printf("%s", pv);


    int *p1;
    int *p2 = NULL;

    printf("%d\n", &p1);
    printf("%d\n", p2);

    return 0;
}