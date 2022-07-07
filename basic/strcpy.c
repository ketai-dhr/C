#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hC.com";
    char str2[] = "HC.com";


    // printf("%i", !strcmp(str1, str2));

    if (!strcmp(str1, str2))
    {
        printf("Same!");
    }
    else
    {
        printf("No same!");
    }
}