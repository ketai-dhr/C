#include <stdio.h>

int main()
{
    char str[] = "i love you！";
    int count = 0;

    while (*str++ != '\0')
    {
        count++;
    }
    printf("How many characters in total: %d", count);

    return 0;
}