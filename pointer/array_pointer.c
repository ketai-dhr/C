#include <stdio.h>

int main()
{
    // int a;
    // int *p = &a;

    // printf("Please enter an integer: ");
    // scanf("%d", &a);
    // printf("a = %d\n", a);

    // printf("enter another");
    // scanf("%d", p);
    // printf("%d", a);
    // char str[128];

    // printf("Please enter an string: ");
    // scanf("%s", str);

    // printf("The string you entered is :%p", &str[0]);

    // return 0;

    char a[] = "FishC";
    char *p;
    p = a;
    // p = &a[0];
    printf("*p = %c, *(p+1) = %c", *p, *(p+1));
}
