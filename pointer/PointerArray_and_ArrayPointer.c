#include <stdio.h>

int main()
{

    // char *p[5] = {
    //     "F", "nihao", "xiexie", "snishi", "nihaoa"};

    // int i;

    // // printf("%s\n", p[1]);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%s\n", p[i]);
    // }
    int tmp[5] = {1, 2, 3, 4, 5};
    int (*p2)[5] = &tmp;
    int i;
    
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(*p2 + i));

    }

    return 0;
}