#include <stdio.h>

char * print_B()
{
    // char *B1;
    char *B[][1] = {
        {" ###### "},
        {"##    ##"},
        {"##   #  "},
        {"##  #   "},
        {"##   #  "},
        {"##    ##"},
        {" ###### "}};
    // printf("%s", **B+);
    return **B;
}

void print_C()
{
    char *C[][1] = {
        {" ###### "},
        {"##    ##"},
        {"##      "},
        {"##      "},
        {"##      "},
        {"##    ##"},
        {" ###### "}};
    // return C;
}

int main()
{
    int count;
    char *B, C;

    // scanf("%d", &count);

    B = print_B();
    print_C();
    printf("%u", B);
}