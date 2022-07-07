#include <stdio.h>

int main()
{
    char *cBooks[] = {
        "1",
        "2",
        "3",
        "4",
        "C Primer Plus"
    };

    char **byFishC;
    char **ketaiLoves[4];
    int i;

    byFishC = &cBooks[4];
    ketaiLoves[0] = &cBooks[0];
    ketaiLoves[1] = &cBooks[1];
    ketaiLoves[2] = &cBooks[2];
    ketaiLoves[3] = &cBooks[3];

    printf("%s", *byFishC);

    for (i = 0; i < 4; i++)
    {
        printf("%s\n", *ketaiLoves[i]);
    }
}