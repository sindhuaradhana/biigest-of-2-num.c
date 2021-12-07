#include <stdio.h>
main()
{
    int a,b;
    a=b=0;
    printf("enter the first number:...");
    scanf("%d",&a);
    printf("enter the second number:...");
    scanf("%d",&b);

    if(a==b)
        printf("a and b both are similar");
        else if(a>=b)
            printf("%d is larger",a);
        else
            printf("%d is larger",b);
