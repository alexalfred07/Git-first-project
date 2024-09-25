#include<stdio.h>
int main()
{
    int a;
    printf("Enter your no:");
    scanf("%d",&a);

    int b;
    printf("Enter your no:");
    scanf("%d",&b);

    int c;
    printf("Enter your no:");
    scanf("%d",&c);

    int max=(a>b)?(a>c ? a:c) :(b>c ? b:c);
    printf("%d",max);


    

    return 0;
}